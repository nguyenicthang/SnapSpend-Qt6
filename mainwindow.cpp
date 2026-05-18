#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidget>
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    danhMucHienTai = "Chưa chọn";
    taiDuLieuLen();
    ui->txt_SoTien->setValidator(new QIntValidator(0, 99999999, this));
}

MainWindow::~MainWindow() { delete ui; }

// Chọn danh mục
void MainWindow::on_btn_AnUong_clicked()   { danhMucHienTai = "Ăn uống"; }
void MainWindow::on_btn_HocTap_clicked()   { danhMucHienTai = "Học tập"; }
void MainWindow::on_btn_DiChuyen_clicked() { danhMucHienTai = "Di chuyển"; }

// Nút Lưu
void MainWindow::on_btn_Luu_clicked() {
    QString soTien = ui->txt_SoTien->text().trimmed();
    if (soTien.isEmpty()) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập số tiền!");
        return;
    }
    if (danhMucHienTai == "Chưa chọn") {
        QMessageBox::warning(this, "Lỗi", "Vui lòng chọn danh mục!");
        return;
    }
    luuFileCSV(danhMucHienTai, soTien);
    ui->txt_SoTien->clear();
    taiDuLieuLen();
}

// Ghi xuống file CSV
void MainWindow::luuFileCSV(QString danhMuc, QString soTien) {
    QFile file("giaodich.csv");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out.setEncoding(QStringConverter::Utf8);
        QString ngay = QDateTime::currentDateTime().toString("dd/MM/yyyy");
        out << danhMuc << "," << soTien << "," << ngay << "\n";
        file.close();
    }
}

// Đọc CSV lên bảng
void MainWindow::taiDuLieuLen() {
    ui->table_GiaoDich->setRowCount(0);
    long tongTien = 0;

    QFile file("giaodich.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        ui->lbl_TongTien->setText("Tổng: 0 VNĐ");
        return;
    }
    QTextStream in(&file);
    in.setEncoding(QStringConverter::Utf8);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList cols = line.split(",");
        if (cols.size() < 3) continue;
        int row = ui->table_GiaoDich->rowCount();
        ui->table_GiaoDich->insertRow(row);
        ui->table_GiaoDich->setItem(row, 0, new QTableWidgetItem(cols[0]));
        ui->table_GiaoDich->setItem(row, 1, new QTableWidgetItem(cols[1]));
        ui->table_GiaoDich->setItem(row, 2, new QTableWidgetItem(cols[2]));
        tongTien += cols[1].toLong();
    }
    file.close();

    // Cập nhật label tổng
    ui->lbl_TongTien->setText("Tổng: " + QString::number(tongTien) + " VNĐ");
}
void MainWindow::on_btn_Loc_clicked() {
    QString batDau = ui->date_BatDau->date().toString("dd/MM/yyyy");
    QString ketThuc = ui->date_KetThuc->date().toString("dd/MM/yyyy");

    ui->table_GiaoDich->setRowCount(0);
    long tongTien = 0;

    QFile file("giaodich.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return;
    QTextStream in(&file);
    in.setEncoding(QStringConverter::Utf8);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList cols = line.split(",");
        if (cols.size() < 3) continue;

        // So sánh ngày dạng dd/MM/yyyy — đổi về yyyy/MM/dd để so sánh đúng
        QString ngay = cols[2].trimmed();
        QString ngayCmp   = ngay.mid(6,4)+"/"+ngay.mid(3,2)+"/"+ngay.mid(0,2);
        QString batDauCmp = batDau.mid(6,4)+"/"+batDau.mid(3,2)+"/"+batDau.mid(0,2);
        QString ketThucCmp= ketThuc.mid(6,4)+"/"+ketThuc.mid(3,2)+"/"+ketThuc.mid(0,2);

        if (ngayCmp >= batDauCmp && ngayCmp <= ketThucCmp) {
            int row = ui->table_GiaoDich->rowCount();
            ui->table_GiaoDich->insertRow(row);
            ui->table_GiaoDich->setItem(row, 0, new QTableWidgetItem(cols[0]));
            ui->table_GiaoDich->setItem(row, 1, new QTableWidgetItem(cols[1]));
            ui->table_GiaoDich->setItem(row, 2, new QTableWidgetItem(cols[2]));
            tongTien += cols[1].toLong();
        }
    }
    file.close();
    ui->lbl_TongTien->setText("Tổng: " + QString::number(tongTien) + " VNĐ");
}
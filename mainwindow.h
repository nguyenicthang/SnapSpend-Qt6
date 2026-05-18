#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QIntValidator> 

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_Luu_clicked();
    void on_btn_AnUong_clicked();
    void on_btn_HocTap_clicked();
    void on_btn_DiChuyen_clicked();
    void on_btn_Loc_clicked();

private:
    Ui::MainWindow *ui;
    QString danhMucHienTai;
    void luuFileCSV(QString danhMuc, QString soTien);
    void taiDuLieuLen();
};

#endif
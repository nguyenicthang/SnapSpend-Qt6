/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_DanhMucHienTai;
    QHBoxLayout *horizontalLayout_danhmuc;
    QPushButton *btn_HocTap;
    QPushButton *btn_DiChuyen;
    QPushButton *btn_AnUong;
    QLineEdit *txt_SoTien;
    QLineEdit *txt_GhiChu;
    QHBoxLayout *horizontalLayout_luu;
    QPushButton *btn_DanAnh;
    QLabel *lbl_AnhHoaDon;
    QSpacerItem *spacer_luu;
    QPushButton *btn_Luu;
    QHBoxLayout *horizontalLayout_loc;
    QLabel *lbl_TuNgay;
    QDateEdit *date_BatDau;
    QLabel *lbl_DenNgay;
    QDateEdit *date_KetThuc;
    QPushButton *btn_Loc;
    QPushButton *btn_XemTat;
    QSpacerItem *horizontalSpacer;
    QLabel *lbl_TongTien;
    QTableWidget *table_GiaoDich;
    QFrame *chart_Container;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(768, 720);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#btn_HocTap, QPushButton#btn_DiChuyen, QPushButton#btn_AnUong {\n"
"    background-color: #2ecc71; color: white; border: none;\n"
"    border-radius: 6px; padding: 6px 12px; font-weight: bold;\n"
"}\n"
"QPushButton#btn_HocTap:hover, QPushButton#btn_DiChuyen:hover, QPushButton#btn_AnUong:hover {\n"
"    background-color: #27ae60;\n"
"}\n"
"QPushButton#btn_Luu {\n"
"    background-color: #27ae60; color: white; border: none;\n"
"    border-radius: 6px; padding: 8px; font-weight: bold;\n"
"}\n"
"QPushButton#btn_Loc {\n"
"    background-color: #16a085; color: white; border: none;\n"
"    border-radius: 6px; padding: 6px 16px; font-weight: bold;\n"
"}\n"
"QPushButton#btn_Loc:hover { background-color: #1abc9c; }\n"
"QPushButton#btn_XemTat {\n"
"    background-color: #7f8c8d; color: white; border: none;\n"
"    border-radius: 6px; padding: 6px 16px; font-weight: bold;\n"
"}\n"
"QPushButton#btn_XemTat:hover { background-color: #95a5a6; }\n"
"QPushButton#btn_DanAnh {\n"
"    background-color: #2980b9; co"
                        "lor: white; border: none;\n"
"    border-radius: 6px; padding: 6px 14px; font-weight: bold;\n"
"}\n"
"QPushButton#btn_DanAnh:hover { background-color: #3498db; }\n"
"QLineEdit#txt_SoTien, QLineEdit#txt_GhiChu {\n"
"    border: 2px solid #2ecc71; border-radius: 6px;\n"
"    padding: 6px 10px; background-color: #ffffff;\n"
"}\n"
"QDateEdit#date_BatDau, QDateEdit#date_KetThuc {\n"
"    border: 2px solid #2ecc71; border-radius: 6px;\n"
"    padding: 4px 8px; background-color: #ffffff;\n"
"}\n"
"QLabel#lbl_TongTien {\n"
"    color: #1e8449; font-size: 15px; font-weight: bold;\n"
"    background-color: #d5f5e3; border: 2px solid #2ecc71;\n"
"    border-radius: 6px; padding: 6px 12px;\n"
"}\n"
"QLabel#lbl_AnhHoaDon {\n"
"    color: #2980b9; font-style: italic;\n"
"}\n"
"QTableWidget#table_GiaoDich QHeaderView::section {\n"
"    background-color: #27ae60; color: white;\n"
"    font-weight: bold; padding: 6px; border: none;\n"
"}\n"
"QMenuBar { background-color: #1e8449; color: white; }\n"
"QStatusBar { background-colo"
                        "r: #d5f5e3; color: #1e8449; }\n"
"   "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        lbl_DanhMucHienTai = new QLabel(centralwidget);
        lbl_DanhMucHienTai->setObjectName("lbl_DanhMucHienTai");

        verticalLayout->addWidget(lbl_DanhMucHienTai);

        horizontalLayout_danhmuc = new QHBoxLayout();
        horizontalLayout_danhmuc->setObjectName("horizontalLayout_danhmuc");
        btn_HocTap = new QPushButton(centralwidget);
        btn_HocTap->setObjectName("btn_HocTap");

        horizontalLayout_danhmuc->addWidget(btn_HocTap);

        btn_DiChuyen = new QPushButton(centralwidget);
        btn_DiChuyen->setObjectName("btn_DiChuyen");

        horizontalLayout_danhmuc->addWidget(btn_DiChuyen);

        btn_AnUong = new QPushButton(centralwidget);
        btn_AnUong->setObjectName("btn_AnUong");

        horizontalLayout_danhmuc->addWidget(btn_AnUong);


        verticalLayout->addLayout(horizontalLayout_danhmuc);

        txt_SoTien = new QLineEdit(centralwidget);
        txt_SoTien->setObjectName("txt_SoTien");

        verticalLayout->addWidget(txt_SoTien);

        txt_GhiChu = new QLineEdit(centralwidget);
        txt_GhiChu->setObjectName("txt_GhiChu");

        verticalLayout->addWidget(txt_GhiChu);

        horizontalLayout_luu = new QHBoxLayout();
        horizontalLayout_luu->setObjectName("horizontalLayout_luu");
        btn_DanAnh = new QPushButton(centralwidget);
        btn_DanAnh->setObjectName("btn_DanAnh");

        horizontalLayout_luu->addWidget(btn_DanAnh);

        lbl_AnhHoaDon = new QLabel(centralwidget);
        lbl_AnhHoaDon->setObjectName("lbl_AnhHoaDon");

        horizontalLayout_luu->addWidget(lbl_AnhHoaDon);

        spacer_luu = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_luu->addItem(spacer_luu);

        btn_Luu = new QPushButton(centralwidget);
        btn_Luu->setObjectName("btn_Luu");

        horizontalLayout_luu->addWidget(btn_Luu);


        verticalLayout->addLayout(horizontalLayout_luu);

        horizontalLayout_loc = new QHBoxLayout();
        horizontalLayout_loc->setObjectName("horizontalLayout_loc");
        lbl_TuNgay = new QLabel(centralwidget);
        lbl_TuNgay->setObjectName("lbl_TuNgay");

        horizontalLayout_loc->addWidget(lbl_TuNgay);

        date_BatDau = new QDateEdit(centralwidget);
        date_BatDau->setObjectName("date_BatDau");
        date_BatDau->setCalendarPopup(true);

        horizontalLayout_loc->addWidget(date_BatDau);

        lbl_DenNgay = new QLabel(centralwidget);
        lbl_DenNgay->setObjectName("lbl_DenNgay");

        horizontalLayout_loc->addWidget(lbl_DenNgay);

        date_KetThuc = new QDateEdit(centralwidget);
        date_KetThuc->setObjectName("date_KetThuc");
        date_KetThuc->setCalendarPopup(true);

        horizontalLayout_loc->addWidget(date_KetThuc);

        btn_Loc = new QPushButton(centralwidget);
        btn_Loc->setObjectName("btn_Loc");

        horizontalLayout_loc->addWidget(btn_Loc);

        btn_XemTat = new QPushButton(centralwidget);
        btn_XemTat->setObjectName("btn_XemTat");

        horizontalLayout_loc->addWidget(btn_XemTat);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_loc->addItem(horizontalSpacer);

        lbl_TongTien = new QLabel(centralwidget);
        lbl_TongTien->setObjectName("lbl_TongTien");

        horizontalLayout_loc->addWidget(lbl_TongTien);


        verticalLayout->addLayout(horizontalLayout_loc);

        table_GiaoDich = new QTableWidget(centralwidget);
        if (table_GiaoDich->columnCount() < 4)
            table_GiaoDich->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_GiaoDich->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_GiaoDich->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_GiaoDich->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_GiaoDich->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_GiaoDich->setObjectName("table_GiaoDich");

        verticalLayout->addWidget(table_GiaoDich);

        chart_Container = new QFrame(centralwidget);
        chart_Container->setObjectName("chart_Container");
        chart_Container->setFrameShape(QFrame::Shape::StyledPanel);
        chart_Container->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout->addWidget(chart_Container);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 768, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Qu\341\272\243n L\303\275 Chi Ti\303\252u", nullptr));
        lbl_DanhMucHienTai->setText(QCoreApplication::translate("MainWindow", "Ch\306\260a ch\341\273\215n danh m\341\273\245c", nullptr));
        btn_HocTap->setText(QCoreApplication::translate("MainWindow", "H\341\273\215c t\341\272\255p", nullptr));
        btn_DiChuyen->setText(QCoreApplication::translate("MainWindow", "Di chuy\341\273\203n", nullptr));
        btn_AnUong->setText(QCoreApplication::translate("MainWindow", "\304\202n u\341\273\221ng", nullptr));
        txt_SoTien->setPlaceholderText(QCoreApplication::translate("MainWindow", "Nh\341\272\255p s\341\273\221 ti\341\273\201n t\341\272\241i \304\221\303\242y", nullptr));
        txt_GhiChu->setPlaceholderText(QCoreApplication::translate("MainWindow", "Nh\341\272\255p ghi ch\303\272 (t\303\271y ch\341\273\215n)", nullptr));
        btn_DanAnh->setText(QCoreApplication::translate("MainWindow", "\360\237\223\213 D\303\241n \341\272\243nh h\303\263a \304\221\306\241n", nullptr));
        lbl_AnhHoaDon->setText(QCoreApplication::translate("MainWindow", "Ch\306\260a c\303\263 \341\272\243nh", nullptr));
        btn_Luu->setText(QCoreApplication::translate("MainWindow", "\360\237\222\276 L\306\260u", nullptr));
        lbl_TuNgay->setText(QCoreApplication::translate("MainWindow", "T\341\273\253 ng\303\240y:", nullptr));
        date_BatDau->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd/MM/yyyy", nullptr));
        lbl_DenNgay->setText(QCoreApplication::translate("MainWindow", "\304\220\341\272\277n ng\303\240y:", nullptr));
        date_KetThuc->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd/MM/yyyy", nullptr));
        btn_Loc->setText(QCoreApplication::translate("MainWindow", "\360\237\224\215 L\341\273\215c", nullptr));
        btn_XemTat->setText(QCoreApplication::translate("MainWindow", "Xem t\341\272\245t c\341\272\243", nullptr));
        lbl_TongTien->setText(QCoreApplication::translate("MainWindow", "T\341\273\225ng: 0 VN\304\220", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_GiaoDich->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Danh m\341\273\245c", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_GiaoDich->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "S\341\273\221 ti\341\273\201n", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_GiaoDich->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Ng\303\240y", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_GiaoDich->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Ghi ch\303\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_HocTap;
    QPushButton *btn_DiChuyen;
    QPushButton *btn_AnUong;
    QLineEdit *txt_SoTien;
    QPushButton *btn_Luu;
    QTableWidget *table_GiaoDich;
    QFrame *chart_Container;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(768, 680);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton { background-color: #4CAF50; color: white; border-radius: 5px; }"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        lbl_DanhMucHienTai = new QLabel(centralwidget);
        lbl_DanhMucHienTai->setObjectName("lbl_DanhMucHienTai");

        verticalLayout->addWidget(lbl_DanhMucHienTai);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_HocTap = new QPushButton(centralwidget);
        btn_HocTap->setObjectName("btn_HocTap");

        horizontalLayout->addWidget(btn_HocTap);

        btn_DiChuyen = new QPushButton(centralwidget);
        btn_DiChuyen->setObjectName("btn_DiChuyen");

        horizontalLayout->addWidget(btn_DiChuyen);

        btn_AnUong = new QPushButton(centralwidget);
        btn_AnUong->setObjectName("btn_AnUong");

        horizontalLayout->addWidget(btn_AnUong);


        verticalLayout->addLayout(horizontalLayout);

        txt_SoTien = new QLineEdit(centralwidget);
        txt_SoTien->setObjectName("txt_SoTien");

        verticalLayout->addWidget(txt_SoTien);

        btn_Luu = new QPushButton(centralwidget);
        btn_Luu->setObjectName("btn_Luu");

        verticalLayout->addWidget(btn_Luu);

        table_GiaoDich = new QTableWidget(centralwidget);
        if (table_GiaoDich->columnCount() < 3)
            table_GiaoDich->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_GiaoDich->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_GiaoDich->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_GiaoDich->setHorizontalHeaderItem(2, __qtablewidgetitem2);
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lbl_DanhMucHienTai->setText(QCoreApplication::translate("MainWindow", "Ch\306\260a ch\341\273\215n danh m\341\273\245c", nullptr));
        btn_HocTap->setText(QCoreApplication::translate("MainWindow", "H\341\273\215c t\341\272\255p", nullptr));
        btn_DiChuyen->setText(QCoreApplication::translate("MainWindow", "Di chuy\341\273\203n", nullptr));
        btn_AnUong->setText(QCoreApplication::translate("MainWindow", "\304\202n u\341\273\221ng", nullptr));
        txt_SoTien->setPlaceholderText(QCoreApplication::translate("MainWindow", "Nh\341\272\255p s\341\273\221 ti\341\273\201n t\341\272\241i \304\221\303\242y", nullptr));
        btn_Luu->setText(QCoreApplication::translate("MainWindow", "L\306\260u", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_GiaoDich->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Danh m\341\273\245c", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_GiaoDich->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "S\341\273\221 ti\341\273\201n", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_GiaoDich->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Ng\303\240y", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // Khởi tạo ứng dụng Qt
    QApplication a(argc, argv);

    // Tạo và hiển thị cửa sổ chính (Giao diện của Đức)
    MainWindow w;
    w.show();

    // Vòng lặp chờ người dùng tương tác (Bấm nút, nhập phím...)
    return a.exec();
}
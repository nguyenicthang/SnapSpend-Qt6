#include "xuly_file.h"
#include <fstream>


void luuFileCSV(GiaoDich gd) {
    std::ofstream file("data_v1.csv", std::ios::app); 
    if(file.is_open()) {
        file << gd.soTien << "," << gd.danhMuc << "\n";
        file.close();
    }
}
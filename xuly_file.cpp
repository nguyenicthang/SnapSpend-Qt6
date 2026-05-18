#include "xuly_file.h"
#include <fstream>
#include <sstream>

// Format CSV: danhMuc,soTien,ngayThang,ghiChu
// Khớp với cách mainwindow.cpp đọc: cols[0]=danhMuc, cols[1]=soTien, cols[2]=ngayThang

bool luuGiaoDich(std::vector<GiaoDich> ds, std::string tenFile) {
    std::ofstream file(tenFile);
    if (!file.is_open()) return false;

    for (int i = 0; i < (int)ds.size(); i++) {
        file << ds[i].danhMuc   << ","
             << ds[i].soTien    << ","
             << ds[i].ngayThang << ","
             << ds[i].ghiChu;
        if (i != (int)ds.size() - 1)
            file << "\n";
    }

    file.close();
    return true;
}

std::vector<GiaoDich> docFileCSV(std::string tenFile) {
    std::vector<GiaoDich> ds;
    std::ifstream file(tenFile);
    if (!file.is_open()) return ds;

    std::string line;
    while (std::getline(file, line)) {
        if (line.empty()) continue;

        std::stringstream ss(line);
        std::string danhMuc, tien, ngayThang, ghiChu;

        std::getline(ss, danhMuc,   ',');
        std::getline(ss, tien,      ',');
        std::getline(ss, ngayThang, ',');
        std::getline(ss, ghiChu,    ',');

        // Bỏ qua dòng lỗi format
        if (danhMuc.empty() || tien.empty()) continue;

        GiaoDich gd;
        gd.danhMuc   = danhMuc;
        gd.soTien    = std::stol(tien);   // dùng long, khớp với dulieu.h
        gd.ngayThang = ngayThang;
        gd.ghiChu    = ghiChu;

        ds.push_back(gd);
    }

    file.close();
    return ds;
}

bool hopLeSoTien(std::string s) {
    if (s.empty()) return false;
    for (char c : s) {
        if (!isdigit(c)) return false;  // chỉ cho số nguyên, không dấu chấm
    }
    return true;
}
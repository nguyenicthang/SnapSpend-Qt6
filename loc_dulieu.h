#ifndef LOC_DULIEU_H
#define LOC_DULIEU_H

#include "dulieu.h"
#include <string>

// Lọc giao dịch theo danh mục (VD: "An uong", "Di chuyen")
// Trả về số giao dịch tìm được
int locTheoDanhMuc(GiaoDich ds[], int soLuong, std::string danhMuc);

// Lọc giao dịch theo khoảng ngày, định dạng "dd/MM/yyyy"
// Trả về số giao dịch tìm được, -1 nếu khoảng ngày không hợp lệ
int locTheoKhoangNgay(GiaoDich ds[], int soLuong,
                      std::string ngayBatDau, std::string ngayKetThuc);

#endif
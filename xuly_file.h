#ifndef XULY_FILE_H
#define XULY_FILE_H

#include "dulieu.h"
#include <string>
#include <vector>

// Lưu toàn bộ danh sách giao dịch xuống file CSV
// Format mỗi dòng: danhMuc,soTien,ngayThang,ghiChu
bool luuGiaoDich(std::vector<GiaoDich> ds, std::string tenFile);

// Đọc file CSV, trả về danh sách giao dịch
std::vector<GiaoDich> docFileCSV(std::string tenFile);

// Kiểm tra chuỗi có phải số hợp lệ không (chỉ chứa chữ số)
bool hopLeSoTien(std::string s);

#endif
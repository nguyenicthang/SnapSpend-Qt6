#include "loc_dulieu.h"
#include <iostream>
#include <string>

// ─── Hàm phụ: chuyển "dd/MM/yyyy" → "yyyy/MM/dd" để so sánh chuỗi ───────────
// So sánh trực tiếp "dd/MM/yyyy" sẽ sai vì "20/05" > "01/06" theo ASCII
// Đổi về dạng "yyyy/MM/dd" thì sort theo alphabet là đúng thứ tự thời gian
static std::string chuanHoaNgay(const std::string& ngay) {
    // Đầu vào: "15/05/2025" → Đầu ra: "2025/05/15"
    if (ngay.size() != 10) return ngay; // không đúng định dạng, trả nguyên
    std::string dd   = ngay.substr(0, 2);
    std::string mm   = ngay.substr(3, 2);
    std::string yyyy = ngay.substr(6, 4);
    return yyyy + "/" + mm + "/" + dd;
}

// ─── locTheoDanhMuc ───────────────────────────────────────────────────────────
int locTheoDanhMuc(GiaoDich ds[], int soLuong, std::string danhMuc) {
    int dem = 0;
    for (int i = 0; i < soLuong; i++) {
        if (ds[i].danhMuc == danhMuc) {
            std::cout << "  [" << ds[i].ngayThang << "] "
                      << ds[i].danhMuc << " | "
                      << ds[i].ghiChu  << " | "
                      << ds[i].soTien  << " VND" << std::endl;
            dem++;
        }
    }
    if (dem == 0)
        std::cout << "  (Khong co giao dich nao thuoc danh muc: "
                  << danhMuc << ")" << std::endl;
    return dem;
}

// ─── locTheoKhoangNgay ────────────────────────────────────────────────────────
int locTheoKhoangNgay(GiaoDich ds[], int soLuong,
                      std::string ngayBatDau, std::string ngayKetThuc) {
    std::string batDau  = chuanHoaNgay(ngayBatDau);
    std::string ketThuc = chuanHoaNgay(ngayKetThuc);

    if (batDau > ketThuc) {
        std::cout << "  Loi: ngayBatDau (" << ngayBatDau
                  << ") lon hon ngayKetThuc (" << ngayKetThuc << ")" << std::endl;
        return -1;
    }

    int dem = 0;
    for (int i = 0; i < soLuong; i++) {
        std::string ngayChuanHoa = chuanHoaNgay(ds[i].ngayThang);
        if (ngayChuanHoa >= batDau && ngayChuanHoa <= ketThuc) {
            std::cout << "  [" << ds[i].ngayThang << "] "
                      << ds[i].danhMuc << " | "
                      << ds[i].ghiChu  << " | "
                      << ds[i].soTien  << " VND" << std::endl;
            dem++;
        }
    }

    if (dem == 0)
        std::cout << "  Khong tim thay giao dich nao trong khoang nay." << std::endl;

    return dem;
}
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

// Khai báo struct SinhVien
struct SinhVien {
    int stt;
    string hoTen;
    float diemToan;
    float diemVan;
    string chuyenBan;
};

int main() {
    int soLuongSinhVien;
    cout << "Nhap so luong sinh vien: ";
    cin >> soLuongSinhVien;

    // Khai báo vector chứa danh sách sinh viên
    vector<SinhVien> danhSachSinhVien;

    // Nhập thông tin cho từng sinh viên
    for (int i = 0; i < soLuongSinhVien; ++i) {
        SinhVien sv;
        cout << "Nhap thong tin cho sinh vien thu " << i+1 << ":\n";
        cout << "STT: ";
        cin >> sv.stt;
        cout << "Ho va ten: ";
        cin.ignore(); // Đảm bảo getline không bị trôi lệnh
        getline(cin, sv.hoTen);
        cout << "Diem Toan: ";
        cin >> sv.diemToan;
        cout << "Diem Van: ";
        cin >> sv.diemVan;
        cout << "Chuyen mon: ";
        cin.ignore(); // Đảm bảo getline không bị trôi lệnh
        getline(cin, sv.chuyenBan);
        danhSachSinhVien.push_back(sv);
    }

    // In tiêu đề của bảng
    cout << left << setw(5) << "STT" << setw(20) << "Ho va ten" << setw(10) << "Toan" << setw(10) << "Van" << setw(15) << "Chuyen mon\n";
    // In thông tin của từng sinh viên trong danh sách
    for (const auto& sv : danhSachSinhVien) {
        cout << left << setw(5) << sv.stt << setw(20) << sv.hoTen << setw(10) << sv.diemToan << setw(10) << sv.diemVan << setw(15) << sv.chuyenBan << "\n";
    }

    return 0;
}
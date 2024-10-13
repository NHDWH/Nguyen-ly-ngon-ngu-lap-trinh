#include <iostream>
#include <iomanip>
#include <locale>
#include <string>
#include <map>
using namespace std;


struct g3 : std::numpunct<char> {
    char do_thousands_sep()   const { return '.'; } 
    std::string do_grouping() const { return "\3"; } 
};

struct Dulieu {
    int stt;
    char SanPham[20];
    int gia;
    int soluong;
    int thanhTien;
    char nguoiBan[10];
};

int main() 
{
    cout.imbue(locale(cout.getloc(), new g3));

    Dulieu dsDL[5];
    map<string, int> tongTienTheoNguoiBan;

    for (int i = 0; i < 5; i++) 
    {
        cout << "Nhap thong tin san pham thu " << i+1 << ": " << endl;
        cout << "STT: ";
        cin  >> dsDL[i].stt;

        cout << "San pham: ";
        cin.ignore(1);
        cin.getline(dsDL[i].SanPham, sizeof(dsDL[i].SanPham));

        cout << "Gia: ";
        cin >> dsDL[i].gia;

        cout << "So luong: ";
        cin >> dsDL[i].soluong;

        dsDL[i].thanhTien = dsDL[i].gia * dsDL[i].soluong;

        cout << "Nguoi ban: ";
        cin >> dsDL[i].nguoiBan;

        tongTienTheoNguoiBan[dsDL[i].nguoiBan] += dsDL[i].thanhTien;
    }

    cout << left << setw(15) << "STT" << setw(20) << "San pham" << setw(20) << "Gia" << setw(15) << "So luong" << setw(20) << "Thanh tien" << right << setw(20) << "Nguoi ban" << endl;
    cout << setfill ('.');
    for (int i = 0; i < 5; i++) {
        cout << left << setw(15) << dsDL[i].stt;
        cout << left << setw(20) << dsDL[i].SanPham; 
        cout << left << setw(20) << dsDL[i].gia; 
        cout << left << setw(15) << dsDL[i].soluong;
        cout << left << setw(20) << dsDL[i].thanhTien;
        cout << right << setw(20) << dsDL[i].nguoiBan << endl;
    }

    cout << "\nTong so tien theo nguoi ban:\n";
    for (const auto& pair : tongTienTheoNguoiBan) {
        cout << "Nguoi ban: " << left << setw(10) << pair.first << "Tong tien: " << pair.second << endl;
    }

    return 0;
}
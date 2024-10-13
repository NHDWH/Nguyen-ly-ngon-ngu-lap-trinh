#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct Dulieu {
    int STT;
    char SanPham[20];
    int gia;
    int soluong;
    int thanhTien;
    char nguoiBan[10];
};

int main(){
    Dulieu dsDL[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Nhap thong tin san pham thu " << i+1 << ": " << endl;
        cout << "STT: ";
        cin >> dsDL[i].STT;

        cout << "San pham: ";
        cin >> ws; 
        cin.getline(dsDL[i].SanPham, sizeof(dsDL[i].SanPham)); 
        
        cout << "Gia: ";
        cin >> dsDL[i].gia;

        cout << "So luong: ";
        cin >> dsDL[i].soluong;

        dsDL[i].thanhTien = dsDL[i].gia * dsDL[i].soluong;

        cout << "Nguoi ban: ";
        cin >> dsDL[i].nguoiBan;
    }

    cout << left << setw(15) << "STT" << setw(20) << "San pham" << setw(20) << "Gia" << setw(15) << "So luong" << setw(20) << "Thanh tien" << right << setw(20) << "Nguoi ban" << endl;
    cout << setfill('.');
    for (int i = 0; i < 5; i++){
        cout << left << setw(15) << dsDL[i].STT;
        cout << left << setw(20) << dsDL[i].SanPham;
        cout << left << setw(20) << dsDL[i].gia;
        cout << left << setw(15) << dsDL[i].soluong;
        cout << left << setw(20) << dsDL[i].thanhTien;
        cout << right << setw(20) << dsDL[i].nguoiBan << endl;
    }

    return 0;
}
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

struct Dulieu
{
    int STT;
    string Hovaten;
    char loai;
    int sonam;
    int songay;
    int thanhtien;
};

int main(){
    const int MAX_SIZE = 6;
    Dulieu danhsach[MAX_SIZE];
    char findten[100];
    cin.getline(findten,100);

    danhsach[0].STT = 1;
    danhsach[0].Hovaten = "Nguyen Van A";
    danhsach[0].loai = 'A' ;
    danhsach[0].sonam = 7;
    danhsach[0].songay = 12;
    danhsach[0].thanhtien = danhsach[0].songay * 200000 * 0.5;

    danhsach[1].STT = 2;
    danhsach[1].Hovaten = "Nguyen Thi B";
    danhsach[1].loai = 'B' ;
    danhsach[1].sonam = 5;
    danhsach[1].songay = 4;
    danhsach[1].thanhtien = danhsach[0].songay * 200000 * 0.5;

    danhsach[2].STT = 3;
    danhsach[2].Hovaten = "Nguyen Hoang An";
    danhsach[2].loai = 'A' ;
    danhsach[2].sonam = 1;
    danhsach[2].songay = 7;
    danhsach[2].thanhtien = danhsach[0].songay * 200000 * 0.5;

    danhsach[3].STT = 4;
    danhsach[3].Hovaten = "Nguyen Thi G";
    danhsach[3].loai = 'C' ;
    danhsach[3].sonam = 0;
    danhsach[3].songay = 8;
    danhsach[3].thanhtien = danhsach[0].songay * 200000 * 0.5;

    danhsach[4].STT = 5;
    danhsach[4].Hovaten = "Nguyen Van B";
    danhsach[4].loai = 'A' ;
    danhsach[4].sonam = 6;
    danhsach[4].songay = 3;
    danhsach[4].thanhtien = danhsach[0].songay * 200000 * 0.5;

    danhsach[5].STT = 6;
    danhsach[5].Hovaten = "Nguyen Thi Hong";
    danhsach[5].loai = 'B' ;
    danhsach[5].sonam = 7;
    danhsach[5].songay = 10;
    danhsach[5].thanhtien = danhsach[0].songay * 200000 * 0.5;

    for (int i = 0; i < MAX_SIZE; ++i)
    {
        if (danhsach[i].loai == 'A')
        {
            danhsach[i].thanhtien = danhsach[i].songay * 200000 * 0.5;
        } 
    }

    for (int i = 0; i < MAX_SIZE; ++i)
    {
        if (danhsach[i].loai == 'B' && danhsach[i].sonam >=3)
        {
            danhsach[i].thanhtien = danhsach[i].songay * 200000 * 0.7;
        } 
        else {
            danhsach[i].thanhtien = danhsach[i].songay * 200000 * 0.8;
        }
    }

    for (int i = 0; i < MAX_SIZE; ++i)
    {
        if (danhsach[i].loai == 'C')
        {
            danhsach[i].thanhtien = danhsach[i].songay * 200000;
        } 
    }

    for (int i = 0; i < MAX_SIZE; ++i)
    {
        cout << "STT: " << danhsach[i].STT << endl;
        cout << "Ho va ten: " << danhsach[i].Hovaten << endl;
        cout << "Loai: " << danhsach[i].loai << endl;
        cout << "So nam: " << danhsach[i].songay << endl;
        cout << "Thanh tien: " << danhsach[i].thanhtien << endl;
    }

    for (int i = 0; i < MAX_SIZE; ++i)
    {
        if (danhsach[i].loai == 'B')
        {
           cout << "Danh sach khach hang loai B la: " << endl;
           cout << "STT: " << danhsach[i].STT << endl;
           cout << "Ho va ten: " << danhsach[i].Hovaten << endl;
           cout << "Loai: " << danhsach[i].loai << endl;
           cout << "So nam: " << danhsach[i].songay << endl;
           cout << "Thanh tien: " << danhsach[i].thanhtien << endl;
        }
        
    }

    
    return 0;
}
    


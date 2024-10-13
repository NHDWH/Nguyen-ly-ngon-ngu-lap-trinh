#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

struct hososinhvien
{
    /* data */
    int stt;
    char mssv[50];
    char hovaten[100];
    char sdt[10];
};
#define maxhs 50
int main()
{
    hososinhvien hocsinh[maxhs];
    int i;
    for (i=0;i<2;i++)
    {
    hocsinh[i].stt=i;

    cout << "Xin moi nhap mssv: ";
    cin>> hocsinh[i].mssv;

    cout << "Xin moi nhap ho va ten: ";
    char hoten[100];
    cin.ignore(1);
    cin.getline(hoten,100);
    strcpy(hocsinh[i].hovaten,hoten);


    cout << "Xin moi nhap so dien thoai: ";
    cin >> hocsinh[i].sdt;
    }

    cout << "---------------------------------------" << endl;
    cout << setw(10) << left << "STT" ;
    cout << setw(50) << left << "MSSV" ;
    cout << setw(100) << left << "Ho va ten" ;
    cout << setw(10) << right << "SDT" << endl;

    cout << setfill('.') << endl;
    for (i=0;i<2;i++)
    {
    cout << setw(10) << left << hocsinh[i].stt ;
    cout << setw (50) << left << hocsinh[i].mssv ;
    cout << setw(100) << left << hocsinh[i].hovaten ;
    cout << setw(10) << right << hocsinh[i].sdt << endl;
    }


    ////////////// tim kiem thong tin
    int option=3;
    while (option!=0)
    {
            cout << "Xin moi nhap yeu cau: [0] Quit; [1]: mssv; [2]: ten;  ";
            cin >> option;

            switch (option)
            {
                    case 1:
                            cout << "Xin moi nhap mssv can tim: ";
                            char findms[50];
                            cin >> findms;

                            for (i=0;i<2;i++)
                            {
                                if (strcmp(hocsinh[i].mssv,findms)==0)
                                {
                                    cout << "Sinh vien co ton tai " << endl;
                                    cout << setw(10) << left << hocsinh[i].stt ;
                                    cout << setw (50) << left << hocsinh[i].mssv ;
                                    cout << setw(100) << left << hocsinh[i].hovaten ;
                                    cout << setw(10) << right << hocsinh[i].sdt << endl;
                                    break;
                                }
                                else{
                                    cout << "Sinh vien da nghi hoc, mat du lieu." << endl;
                                }                         
                            }
                            break;
                    case 2:
                            cout << "Xin moi nhap ten can tim: ";
                            cin.ignore(1);
                            char findten[100];
                            cin.getline(findten,100);

                            for (i=0;i<2;i++)
                            {
                                if (strcmp(hocsinh[i].hovaten,findten)==0)
                                {
                                    cout << "Sinh vien co ton tai " << endl;
                                    cout << setw(10) << left << hocsinh[i].stt ;
                                    cout << setw (50) << left << hocsinh[i].mssv ;
                                    cout << setw(100) << left << hocsinh[i].hovaten ;
                                    cout << setw(10) << right << hocsinh[i].sdt << endl;
                                    break;
                                }
                                else{
                                    cout << "Sinh vien da nghi hoc, mat du lieu." << endl;
                                }                         
                            }
                            break;



            }
    
   }    
    
    return 0;
}
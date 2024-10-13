#include <iostream>
using namespace std;
int giaithua(int);
int tong(int);

int giaithua(int n)
{
    if(n==1)
        return 1;
    else
        return n*giaithua(n-1);
}

int tong(int n)
{
    if (n==1)
        return 1;
    else
        return n+tong(n-1);
    
}

int main()
{
    int sonhap;
    cout << "Xin moi nhap so can tinh giai thua: ";
    cin >> sonhap;

    cout <<"Giai thua cua: " << sonhap << "! la: " << giaithua(sonhap) << endl;
    cout <<"Tong chuoi: " << sonhap << " la: " << tong(sonhap) << endl;


    return 0;

}

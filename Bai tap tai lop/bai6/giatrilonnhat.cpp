#include <iostream>
using namespace std;
int giaithua(int);
int tong(int);
int findmax(int a[], int n);

int findmax(int a[], int n)
{
    if (n == 1)
        return a[0];
    else 
        return (a[n-1] > findmax(a,n-1)) ? a[n] : findmax(a,n-1);
}

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

    // int 
    int a[10]={0,1,3,6,9,8,5,7,4,2};
    cout << "Gia tri lon nhat trong a la: " << findmax(a,10) << endl;

    return 0;

}
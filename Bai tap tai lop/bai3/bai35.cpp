#include <iostream>
using namespace std;
int main()
{
    int i;
    float a;
    float max,min;
    max=0;
    min=100000;
    for (i=0;i<10;i++)
    {
        cout << "xin moi nhap so thu " << i << " :";
        cin >> a;

        if (a>max)
        {
            max=a;
        }
        else if (a<min)
        {
            min=a;
        }
    }

    //hien thi gia tri max min
    cout << "Gia tri lon nhat trong 10 so la: " << max << endl;
    cout << "Gia tri nho nhat trong 10 so la: " << min << endl;


    // day la chuong trinh tinh giai thua N

    int N;
    cout <<" Ban muon tinh N!. Xin moi nhap N: ";
    cin >> N;
    long int ketqua=1;
    for ( i=1; i< N+1; i++)
    {
        ketqua*=i;
    }
    cout <<" Gia tri N!= " << ketqua << endl;


    return 0;
}
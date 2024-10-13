#include <iostream>
using namespace std;
int main()
{
    int i;
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


    /*
    day la tinh tong S
            1       1           1
    s=     ---  +  ---  +      ---
           1.2     2.3        N(N-1)
    */
    float s;
    ketqua=0;

    cout << "Xin moi nhap gia tri N: " ;
    cin >> N;

    for (i=2;i<N+1;i++)
    {
        ketqua=1/(i*(i-1));
    }
    cout << "Tong S can tim la:" << ketqua << endl;

    return 0;
}
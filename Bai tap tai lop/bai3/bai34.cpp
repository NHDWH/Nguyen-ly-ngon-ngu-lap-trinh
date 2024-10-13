#include <iostream>
using namespace std;
int main()
{
    int i;
    float a;
    float max,min;
    max=0;
    min=100000;
    for (i=0;i<15;i++)
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
    cout << "Gia tri lon nhat trong 15 so la: " << max << endl;
    cout << "Gia tri nho nhat trong 15 so la: " << min << endl;
    return 0;
}
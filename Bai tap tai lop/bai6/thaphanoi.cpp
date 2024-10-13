#include <iostream>
using namespace std;

void towerofhanoi(int n, char a, char b, char c)
{
    if (n==1)
        cout << a << " ----->" << c << endl;
    else
        {
            towerofhanoi(n-1,a,c,b);
            cout << a << " ----->" << c << endl;
            towerofhanoi(n-1,b,a,c);
        }
}

int main()
{
    cout << "Xin moi nhap so dia: ";
    int n;
    cin >> n;

    towerofhanoi(n,'A','B','C');

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int a[3]={0,2,3};
    int *b = new int[3];
    b[2]=5;

    cout << b[2] << endl;
    cout << *(b+2) << endl;

    return 0;
}
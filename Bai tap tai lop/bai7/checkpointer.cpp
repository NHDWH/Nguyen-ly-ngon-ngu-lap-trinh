#include <iostream>
using namespace std;

int main()
{
    int *p,m,n;
    n=1;
    m=2;
    p = new int;
    *p=2;
    p=&n;
    *p=m+1;

    cout << "p = " << p << "; *p = " << *p << "; m = " << m << "; n = " << n << endl;

    return 0;


}
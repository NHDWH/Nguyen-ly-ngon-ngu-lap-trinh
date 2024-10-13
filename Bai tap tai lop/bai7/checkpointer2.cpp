#include <iostream>
using namespace std;

int main()
{
    int *p,*q,m,n;
    n=1;
    m=2;
    p=&n;
    q=&m;
    n++;
    m--;
    p=q;
    q=&n; 

    cout << "p = " << p << "; *p = " << *p << "; q = " << q << "; *q = " << *q << "; m = " << m << "; n = " << n << endl;

    return 0;


}
#include <iostream>
using namespace std;
int daoso(int);

int daoso(int n)
{
    static int s=0;
    if ((n/10)==0)
    {
        return s+n%10;
    }
    else
    {
        s=(n%10+s)*10;
        return daoso(n/10);
    }
}

int main ()
{
    cout << "Xin moi nhap so can dao: ";
    int sodao;
    cin >> sodao;
    cout << "Sao cua so: " << sodao << " la " << daoso(sodao) <<endl;

    return 0;
}
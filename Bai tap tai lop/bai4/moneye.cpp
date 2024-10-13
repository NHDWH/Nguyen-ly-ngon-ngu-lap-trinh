#include <iostream>
using namespace std;

#include <locale>

struct g3 : std::numpunct<char> 
{
    char do_thousands_sep()   const { return '.';  } //  separate with
    string do_grouping() const { return "\3";} // groups of 3 digit
};

int main ()
{
    cout.imbue(locale(cout.getloc(), new g3));
    float sodien, tiendien;
    cout << " -------------------------------------" << endl;
    cout << "Xin moi nhap so dien can tinh: ";
    cin >> sodien;

    cout << " -------------------------------------" << endl;
    if (sodien <=100)
    {
        tiendien=sodien*2000;
    }
    else if (sodien <=200)
    {
        tiendien=100*2000+(sodien-100)*2500;
    }
    else if (sodien <=300)
    {
        tiendien=100*2000+100*2500+(sodien-200)*3000;
    }
    else if (sodien <=400)
    {
        tiendien=100*2000+100*2500+100*3000+(sodien-300)*3500;
    }
    else if (sodien >400)
    {
        tiendien=100*2000+100*2500+100*3000+100*3500+(sodien-400)*4000;
    }

    cout<< "So tien ban can tra la: " << tiendien << endl;

    return 0;
}
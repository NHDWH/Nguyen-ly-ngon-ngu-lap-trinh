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
    int time_in, time_out;
    int time_sing;
    float sotien;
    do
    {
        cout << " Xin moi nhap gio vao: ";
        cin >> time_in;
        cout << " Xin moi nhap gio ra: ";
        cin >> time_out; 
    }while (time_in >= time_out);
    cout << " ---------------------------------"<< endl;
    if (time_out<=17)
    {
        time_sing=time_out-time_in;
        if (time_sing<=3)
        {
            sotien=time_sing*30000*0.9;
        }
        else
        {
            sotien=(3*30000+(time_sing-3)*30000*0.7)*0.9;
        }
    }
    else if (time_in >=17)
    {
        time_sing=time_out-time_in;
        if (time_sing<=3)
        {
            sotien=time_sing*30000;
        }
        else
        {
            sotien=(3*30000+(time_sing-3)*30000*0.7);
        }
    }
    else
    {
        int x,y;
        x=17-time_in;
        y=time_out-17;

        //xet tung truong hop
        if (x>=3)
        {
            sotien=(3*30000+(x-3)*30000*0.7)*0.9+y*30000*0.7;
        }
        else if (y>=(3-x)) // x < 3
        {
            sotien=(x*30000*0.9)+(3-x)*30000+(x+y-3)*30000*0.7;
        }
        else
        {
            sotien=(x*30000*0.9)+y*30000;
        }
    }

    cout <<"So tien ban can thanh toan la: " << sotien <<endl;
    
return 0;
}
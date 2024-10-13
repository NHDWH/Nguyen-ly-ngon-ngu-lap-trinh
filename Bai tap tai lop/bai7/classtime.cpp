#include <iostream>
using namespace std;

class Time
{
private:
    int gio;
    int phut;
    int giay;
public:
    Time(int h=0, int m=0, int s=0);
    void setTime(int h, int m, int s);
    void display ();
};

Time::Time(int h, int m, int s)
{
    gio = h;
    phut = m;
    giay = s;
}
void Time::setTime(int h=0, int m=0, int s=0)
{
    gio = h;
    phut = m;
    giay = s;

}

int main()
{
    Time t(14,46,25);
    t.display();

    Time T2;
    T2.display();

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    char pheptinh;
    float so1,so2,ketqua;

    cout << " Xin moi nhap so thu 1: ";
    cin >> so1;
    cout << " Xin moi nhap so thu 2: ";
    cin >> so2;

    cout << "Xin moi nhap phep can tinh: "<<endl;
    cout << "\t Press '+': cong " <<endl;
    cout << "\t Press '-': tru " <<endl;
    cout << "\t Press '*': nhan " <<endl;
    cout << "\t Press '/': chia " <<endl;
    cin >> pheptinh;

    if (pheptinh=='+')
    {
        ketqua= so1+so2;
        cout <<"Ket qua: " << so1 << pheptinh << so2 << " = " << ketqua << endl; 
    }
    else if (pheptinh=='-')
    {
        ketqua= so1-so2;
        cout <<"Ket qua: " << so1 << pheptinh << so2 << " = " << ketqua << endl; 
    }
    else if (pheptinh=='*')
    {
        ketqua= so1*so2;
        cout <<"Ket qua: " << so1 << pheptinh << so2 << " = " << ketqua << endl; 
    }
    else if (pheptinh=='/')
    {
        ketqua= so1/so2;
        cout <<"Ket qua: " << so1 << pheptinh << so2 << " = " << ketqua << endl; 
    }
    else
    {
        cout << "Ban da nhap sai" << endl;
    }

    cout << "su dung switch" << endl;
    switch (pheptinh)
    {
    case '+':
        ketqua= so1+so2;
        cout <<"Ket qua: " << so1 << pheptinh << so2 << " = " << ketqua << endl; 
        break;
    case '-':
        ketqua= so1-so2;
        cout <<"Ket qua: " << so1 << pheptinh << so2 << " = " << ketqua << endl; 
        break;
    case '*':
        ketqua= so1*so2;
        cout <<"Ket qua: " << so1 << pheptinh << so2 << " = " << ketqua << endl; 
        break;
    case '/':
        ketqua= so1/so2;
        cout <<"Ket qua: " << so1 << pheptinh << so2 << " = " << ketqua << endl; 
        break;
    
    default:
        break;
    }
    return 0;
}
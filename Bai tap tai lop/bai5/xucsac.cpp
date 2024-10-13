#include <iostream>
#include <cstdlib> // ham srand va rand
#include <time.h>  // time
using namespace std;


int main()
{
        int sonhap;
        srand(time(0));
        while (sonhap>18)
        {
        cout << "Xin moi ban nhap so [1-18]: ";
        cin >> sonhap;

        /// may tap so
        int somay;
        int dem=0;
        int tong=0;
        while (dem<3)
        {
                    somay=rand()%6+1;
                    tong+=somay;
                    dem++;
                    switch (somay)
                    {
                    case 1:
                    //1
                        cout << "+------------+"<< endl;
                        cout << "|            |"<< endl;
                        cout << "|            |"<< endl;
                        cout << "|     *      |"<< endl;
                        cout << "|            |"<< endl;
                        cout << "|            |"<< endl;
                        cout << "+------------+"<< endl;
                        break;
                    case 2:
                    //2
                        cout << "+------------+"<< endl;
                        cout << "|            |"<< endl;
                        cout << "|        *   |"<< endl;
                        cout << "|            |"<< endl;
                        cout << "|   *        |"<< endl;
                        cout << "|            |"<< endl;
                        cout << "+------------+"<< endl;
                        break;
                    case 3:
                    //3
                        cout << "+------------+"<< endl;
                        cout << "|            |"<< endl;
                        cout << "|       *    |"<< endl;
                        cout << "|     *      |"<< endl;
                        cout << "|   *        |"<< endl;
                        cout << "|            |"<< endl;
                        cout << "+------------+"<< endl;
                        break;
                    case 4:     
                    //4
                        cout << "+------------+"<< endl;
                        cout << "|            |"<< endl;
                        cout << "|  *      *  |"<< endl;
                        cout << "|            |"<< endl;
                        cout << "|  *      *  |"<< endl;
                        cout << "|            |"<< endl;
                        cout << "+------------+"<< endl;
                        break;
                    case 5:
                    //5
                        cout << "+------------+"<< endl;
                        cout << "|            |"<< endl;
                        cout << "|  *      *  |"<< endl;
                        cout << "|      *     |"<< endl;
                        cout << "|  *      *  |"<< endl;
                        cout << "|            |"<< endl;
                        cout << "+------------+"<< endl;
                        break;
                    case 6:
                    //6
                        cout << "+------------+"<< endl;
                        cout << "|            |"<< endl;
                        cout << "| *   *    * |"<< endl;
                        cout << "|            |"<< endl;
                        cout << "| *   *    * |"<< endl;
                        cout << "|            |"<< endl;
                        cout << "+------------+"<< endl;
                        break;
                    }
        }
        
        //hien thi ket qua
        if (sonhap==tong)
        {
            cout << "Chuc mung ban da chien thang. " << endl; 
        }
        else{
            cout << "Chuc ban may man lan sau. So ban doan " << sonhap << ".So may ra la: " << tong << endl;
        }
        
        }

    return 0;
}
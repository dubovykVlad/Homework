#include <iostream>
using namespace std;

unsigned short int myFunc(unsigned short int x); //Функція void замінена на unsigned short int для використання return
int main()
{
    unsigned short int x, y;
    y = myFunc(x);
    cout << "x: " << x << "\ny: " << y << "\n"; //Додано \n для кращого читання
}
unsigned short int myFunc(unsigned short int x) //Функція void замінена на unsigned short int для використання return
{
    return (4 * x);
}

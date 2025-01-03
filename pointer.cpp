// Online C++ compiler to run C++ program online
#include <iostream>
// iki sayıyı değiş dokuş edeen programın kodunu pointer ve fonk yardımıyla yapınız
using namespace std;
void after(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5;
    int y = 10;
    cout << "degisimden once : x = " << x << "  , y = " << y << endl;

    after(&x, &y);

    cout << " degisimden sonra :  x = " << x << " , y= " << y;
}
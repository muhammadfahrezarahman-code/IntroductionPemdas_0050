#include <iostream>
using namespace std;

int panjang, lebar;

void input()
{
    cout << "Masukkan panjang :";
    cin >> panjang;
    cout << "Masukkan Lebar :";
    cin >> lebar;
}

int luaspersegi(int a, int b)
{
    return a* b;
}

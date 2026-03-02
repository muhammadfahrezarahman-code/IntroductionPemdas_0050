#include <iostream>
using namespace std;

int  jarijari;


void input()
{
    cout << "masukan jarijari :";
    cin >> jarijari;
}

float luaslingkaran(int a)
{
    return a*a* 3.14159;
}

void output()
{
    cout <<"Hasil : " << luaslingkaran(jarijari);
}

int main()
{
    input();
    output();
}

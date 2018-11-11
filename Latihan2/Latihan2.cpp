#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<< "Masukan Nilai A= ";
    cin>> a;
    cout<< "Masukan Nilai B= ";
    cin>> b;
    cout<< "Masukan Nilai C= ";
    cin>> c;

    if(a+b==c || a+c==b || b+c==a)
        cout<< "Benar";
    else
        cout<< "Salah";
}

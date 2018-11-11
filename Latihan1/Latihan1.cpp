#include <iostream>

using namespace std;

int main() {
    int x;
    int max(0);

do {
 cout << "Masukan bilangan :";
 cin >> x;
 if (x>max)
    max=x;
}
while (x!=0);
cout << "Bilangan terbesar adalah : " << max << endl;
}

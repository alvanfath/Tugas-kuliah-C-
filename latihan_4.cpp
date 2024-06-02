#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Kita akan menghitung luas segitiga\n";
    cout << "Masukan alas: ";
    cin >> a;
    cout << "Masukan tinggi: ";
    cin >> b;
    c = (a * b) * 0.5;
    cout << "alas:";
    cout << a << '\n';
    cout << "tinggi:";
    cout << b << '\n';
    cout << "\n";
    cout << "luas segitiga adalah = " << c;
    cout << endl;
    cout << "Selesai" << endl;
    return 0;
}

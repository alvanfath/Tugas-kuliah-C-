#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cout << "Masukan angka pertama: ";
    cin >> a;
    cout << "Masukan angka kedua: ";
    cin >> b;
    cout << "Masukan angka ketiga: ";
    cin >> c;
    cout << "Masukan angka keempat: ";
    cin >> d;
    e = a + b + c + d;
    cout << "Hasil dari ";
    cout << a;
    cout << " + ";
    cout << b;
    cout << " + ";
    cout << c;
    cout << " + ";
    cout << d;
    cout << " = " << e;
    cout << endl;
    cout << "Selesai" << endl;
    return 0;
}
// int main()
// {
//     int a, b, c, d;
//     cout << "Masukkan empat angka (pisahkan dengan spasi): ";
//     cin >> a >> b >> c >> d;

//     int e = a + b + c + d;

//     cout << "Hasil dari " << a << " + " << b << " + " << c << " + " << d << " = " << e << endl;
//     cout << "Selesai" << endl;

//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int jam, menit, detik, hasil;
    cout << "Masukan jam: ";
    cin >> jam;
    cout << "Masukan menit: ";
    cin >> menit;
    cout << "Masukan detik: ";
    cin >> detik;
    int convertJam = jam * 3600;
    hasil = convertJam + (menit * 60) + detik;
    cout << jam << " Jam" << '\n';
    cout << menit << " Menit" << '\n';
    cout << detik << " Detik" << '\n';
    cout << "Hasilnya = " << hasil << '\n';
    cout << endl;
    cout << "Selesai" << endl;
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int I;
    float tabungan = 1000000.0;
    for (I = 2; I <= 10; I++)
    {
        float tabunganAwal = tabungan;
        float bunga = tabungan * 0.02;
        float tabunganSekarang = tabunganAwal + bunga;
        cout << "tabungan bulan ke " << I - 1 << " " << fixed << setprecision(2) << tabunganAwal << "\n";
        cout << "mendapat bunga sebesar " << " " << fixed << setprecision(2) << bunga << "\n";
        cout << "tabungan bulan Ke " << I << " " << fixed << setprecision(2) << tabunganSekarang << "\n";
        tabungan = tabunganSekarang;
    }
    cout << "\nSelesai";
    return 0;
}

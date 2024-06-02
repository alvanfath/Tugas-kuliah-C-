#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int I = 0;
    float tabungan = 1000000.0;
    while (tabungan < 1500000.0)
    {
        float tabunganAwal = tabungan;
        float bunga = tabungan * 0.02;
        float tabunganSekarang = tabunganAwal + bunga;
        cout << "tabungan bulan ke " << I - 1 << " " << fixed << setprecision(2) << tabunganAwal << "\n";
        cout << "mendapat bunga sebesar " << " " << fixed << setprecision(2) << bunga << "\n";
        cout << "tabungan bulan Ke " << I << " " << fixed << setprecision(2) << tabunganSekarang << "\n";
        cout << "\n";
        tabungan = tabunganSekarang;
        I++;
    }
    cout << "\nSelesai";
    cout << "\n tabungan bulan terakhir sampai bulan" << I;
    return 0;
}

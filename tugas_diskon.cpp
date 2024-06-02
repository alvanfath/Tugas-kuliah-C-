#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int totalItem;
    float hargaSatuan, hargaAkhir;
    hargaSatuan = 50000.0;
    cout << "Harga dari 1 item adalah Rp 50.000 jika anda membeli item lebih dari 25 anda akan mendapatkan diskon sebesar 7'%' dan bonusnya gantungan kunci\n";
    cout << "mau beli berapa?: ";
    cin >> totalItem;

    hargaAkhir = hargaSatuan * totalItem;
    if (totalItem > 25)
    {
        // float discount = 7 / 100;
        float hargaDiscount = hargaAkhir * 0.93;
        float discount = hargaAkhir - hargaDiscount;
        cout << "Selamat anda mendapatkan diskon sebesar 7'%' dan mendapatkan bonus gantungan kunci\n";
        cout << "Harga sebelum diskon Rp. " << fixed << setprecision(2) << hargaAkhir << '\n';
        cout << "Diskon harga: Rp. " << fixed << setprecision(2) << discount << '\n';
        cout << "Harga setelah diskon: Rp. " << fixed << setprecision(2) << hargaDiscount << '\n';
        cout << endl;
        return 0;
    }

    cout << "Harga yang harus dibayar adalah RP. " << hargaAkhir;
    cout << "\nSelesai" << endl;
    return 0;
}

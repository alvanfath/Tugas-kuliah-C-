#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Kecepatan dalam meter per detik
    double v_A = 2.0; // Kecepatan Ali
    double v_B = 3.0; // Kecepatan Badu
    double distance = 1000.0; // Jarak antara titik A dan B dalam meter

    // Menghitung waktu pertemuan dalam detik
    double time_in_seconds = distance / (v_A + v_B);

    // Konversi waktu ke jam, menit, dan detik
    int hours = 8; // Ali dan Badu mulai pada jam 08:00:00
    int minutes = 0;
    int seconds = 0;

    // Menambahkan waktu perjalanan ke waktu mulai
    int total_seconds = static_cast<int>(time_in_seconds);
    seconds += total_seconds;

    minutes += seconds / 60;
    seconds %= 60;

    hours += minutes / 60;
    minutes %= 60;

    // Mencetak hasil
    cout << "Ali dan Badu akan berpapasan pada jam ";
    cout << setw(2) << setfill('0') << hours << ":"
         << setw(2) << setfill('0') << minutes << ":"
         << setw(2) << setfill('0') << seconds << endl;

    return 0;
}

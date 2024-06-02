#include <iostream>
using namespace std;
int main()
{
    int I, N, Max, Jum;
    N = 0;
    Max = 0;
    for (I = 1; I <= 10; I = I + 1)
    {
        cout << "Masukan nilai:";
        cin >> N;
        if (N > Max)
        {
            Max = N;
            Jum = 1;
        }
        else if (N == Max)
        {
            Jum++;
        }
    }
    cout << "Nilai max adalah: " << Max << "\n";
    cout << "Jumlah mahasiswa adalah: " << Jum << "\n";
    cout << endl;
    cout << "\nSelesai";
}

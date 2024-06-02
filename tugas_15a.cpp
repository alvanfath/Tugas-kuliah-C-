#include <iostream>
using namespace std;
int main()
{
    int I, N, Max;
    N = 0;
    Max = 0;
    for (I = 1; I <= 10; I = I + 1)
    {
        cout << "Masukan nilai:";
        cin >> N;
        if (N > Max)
        {
            Max = N;
        }
    }
    cout << "Nilai max adalah: " << Max << "\n";
    cout << endl;
    cout << "\nSelesai";
}

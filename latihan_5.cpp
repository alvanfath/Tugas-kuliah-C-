#include <iostream>

using namespace std;

int main()
{
    float celsius, fahrenheit;
    cout << "Kita akan konversi celsius ke fahrenheit \n";
    cout << "Berapa celsius sekarang? : ";
    cin >> celsius;
    float convert = 1.8;
    fahrenheit = (celsius * convert) + 32;
    cout << "setelah di konversi ke fahrenheit hasilnya adalah: " << fahrenheit;
    cout << endl;
    cout << "Selesai" << endl;
    return 0;
}

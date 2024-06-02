#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int findLargeNumber(const vector<int> &arr);

int main()
{
    int a, b, c, max;
    cout << "Masukan angka pertama: ";
    cin >> a;
    cout << "Masukan angka kedua: ";
    cin >> b;
    cout << "Masukan angka ketiga: ";
    cin >> c;

    // ini penjagaan doang biar gaada yang sama masbro
    if (a == b || a == c || b == c)
    {
        cout << "Gaboleh sama bang, udahan lah";
        cout << endl;
        return 0;
    }

    // disini baru mulai casenya
    // if (a > b && a > c)
    // {
    //     max = a;
    // }
    // else if (b > a && b > c)
    // {
    //     max = b;
    // }
    // else
    // {
    //     max = c;
    // }

    // cara simple pake looping
    vector<int> arr = {a, b, c};
    max = findLargeNumber(arr);

    cout << "ini max : " << max;
    cout << endl;
    return 0;
}

int findLargeNumber(const vector<int> &arr)
{
    int largest = arr[0];

    for (int num : arr)
    {
        if (num > largest)
        {
            largest = num;
        }
    }
    return largest;
}

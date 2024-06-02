#include <iostream>

using namespace std;

int main()
{
    int detik = 0;
    int s = 0;
    float meter = 3;
    while (s < 100)
    {
        s = s + meter;
        detik++;
        cout << "di detik " << detik << "\n";
        cout << "dapet " << s << " meter\n";
        if (detik % 10 == 0)
        {
            meter++;
        }
    }
    cout << "dapet di detik " << detik << " pada kecepatan " << meter << " m/detik";
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int detik = 1;
    float meter = 1.9;
    while (meter <= 100)
    {
        meter = meter + 0.1;
        cout << "di detik " << detik << " dapet " << meter << " m \n";
        detik++;
    }

    return 0;
}

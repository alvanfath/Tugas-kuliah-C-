#include <iostream>

using namespace std;

int main()
{
    int detik = 1;
    int meter = 0;
    while (meter < 100)
    {
        meter = meter + 2;
        cout << "di detik " << detik << " dapet " << meter << " m \n";  
        detik++;
    }

    return 0;
}

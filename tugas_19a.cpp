#include <iostream>

using namespace std;

int main()
{
    int detik;
    int s = 0;
    float meter = 3;
    
    for (detik = 1; detik <= 100; detik++)
    {
        s = s + meter;
        if (detik % 10 == 0)
        {
            meter++;
        }
    }
    cout << "dapet meter sebanyak " << s;
    return 0;
}

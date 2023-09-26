#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, t, tich = 1;
    int dv;
    cin >> n;
    t = n;
    while (t != 0)
    {
        dv = t % 10;
        if (dv % 2 != 0) {
            tich = tich * dv;
        }
        t = t / 10;
    }
    cout << tich;
    return 0;
}
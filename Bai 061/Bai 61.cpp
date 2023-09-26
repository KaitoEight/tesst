#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, t, dem = 0;
    int dv;
    cin >> n;
    t = n;
    while (t != 0)
    {
        dv = t % 10;
        if (dv % 2 != 0) {
            dem++;
        }
        t = t / 10;
    }
    cout << dem;
    return 0;
}
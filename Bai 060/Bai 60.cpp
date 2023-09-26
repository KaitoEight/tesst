#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, t;
    float tich = 1;
    cin >> n;
    t = n;
    while (t != 0)
    {
        float dv = t % 10;
        tich = tich * dv;
        t = t / 10;
    }
    cout << tich;
    return 0;
}
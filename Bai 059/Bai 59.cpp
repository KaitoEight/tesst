#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, t;
    float dem = 0;
    cin >> n;
    t = n;
    while (t != 0)
    {
        dem++;
        t = t / 10;
    }
    cout << dem;
    return 0;
}
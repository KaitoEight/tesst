#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, t;
    float S = 0;
    cin >> n;
    t = n;
    while(t != 0)
    {
        float dv = t % 10;
        S = S + dv;
        t = t / 10;
    }
    cout << S;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    float x, t;
    cin >> n >> x;
    t = x;
    for (int i = 1; i <= n; i++)
    {
        t = t * (x + i);
    }
    cout << t;
    return 0;
}
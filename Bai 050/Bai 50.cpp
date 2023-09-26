#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    float S = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) {
            S = S + i;
        }
    }
    cout << S;
    return 0;
}
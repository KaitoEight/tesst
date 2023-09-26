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

        S = S + sqrt(1 + ((float)1 / (i * i)) + ((float)1 / ((i + 1) * (i + 1))));
    }
    cout << S;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i = i + 2)
    {
        if (n % i == 0) {
            cout << i;
        }
    }
    return 0;
}
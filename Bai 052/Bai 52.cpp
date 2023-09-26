#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) {
            count++;
        }
    }
    cout << count;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int dem = 0;
    cin >> n;
    for (int i = 2; i <= n; i=i+2)
    {
        if (n % i == 0) {
            dem++;
        }
    }
    cout << dem;
    return 0;
}
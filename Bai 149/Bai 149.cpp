#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
		{
			m = m - n;
		}
		else
		{
			n = n - m;
		}
	}
	float ucln = m + n;
	cout << ucln;
	return 0;
}

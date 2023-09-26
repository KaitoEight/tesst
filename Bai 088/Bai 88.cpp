#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float S = 0;
	int m = 0;
	int dau = 1;
	for (int i = 1; i <= n; i++)
	{
		m = m + i;
		S = S + ((float)dau / m);
		dau = -dau;
	}
	cout << S;
	return 0;
}
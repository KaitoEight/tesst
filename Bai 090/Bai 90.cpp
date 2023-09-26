#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float S = 0;
	int t = 1;
	int m = 1;
	int dau = -1;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
		m = m * i;
		S = S + ((float)(dau * t) / m);
		dau = -dau;
	}
	cout << S;
	return 0;
}
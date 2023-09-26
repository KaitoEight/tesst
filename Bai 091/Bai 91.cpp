#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float S = -1;
	int t = 1;
	int m = 1;
	int dau = 1;
	for (int i = 2; i <= 2*n; i = i + 2)
	{
		t = t * x * x;
		m = m * i * (i-1);
		S = S + ((float)(dau * t) / m);
		dau = -dau;
	}
	cout << S;
	return 0;
}
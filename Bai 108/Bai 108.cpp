#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x;
	cin >> x;
	float xx = (x * M_PI) / 180;
	float S = 1;
	float e = 1;
	float t = 1;
	float m = 1;
	int dau = -1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = (float)t / m;
		S = S + (dau * e);
		dau = -dau;
		i = i + 2;
	}
	cout << S;
	return 0;
}
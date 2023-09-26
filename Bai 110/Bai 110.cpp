#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float S = 0;
	int dau = 1;
	float e = 4;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / i;
		S = S + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << S;
	return 0;
}
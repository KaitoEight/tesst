#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float S = 3;
	int dau = 1;
	float e = 3;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		S = S + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << S;
	return 0;
}
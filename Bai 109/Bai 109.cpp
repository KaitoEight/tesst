#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float S = 1;
	float m = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		m = m * i;
		e = (float)1 / m;
		S = S + e;
		i = i + 1;
	}
	cout << S;
	return 0;
}
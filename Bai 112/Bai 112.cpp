#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float S = 4 - 2/4 - 1/5 - 1/6;
	float t = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t = t * 16;
		e = (4 / (8 * i + 1) - 2 / (8 * i + 4) - 1 / (8 * i + 5)) / t;
		S = S + e;
		i = i + 1;
	}
	cout << S;
	return 0;
}
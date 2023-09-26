#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x;
	cin >> x;
	float f;
	if (x >= 5)
	{
		f = 2 * x * x + 5 * x + 9;
	}
	else
	{
		f = -2 * x * x + 4 * x - 9;
	}
	cout << f;
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a < 0)
	{
		a = -a;
	}
	else
	{
		if (b < 0)
		{
			b = -b;
		}
	}
	cout << a << b;
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, temp;
	cin >> a >> b;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	cout << a << " " << b;
	return 0;
}
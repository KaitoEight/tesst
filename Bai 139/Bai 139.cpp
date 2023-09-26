#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b;
	cin >> a >> b;
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "Vo So Nghiem";
		}
		else
		{
			cout << "Vo Nghiem";
		}

	}
	else
	{
		float x = (-b) / a;
		cout << x;
	}
	return 0;
}
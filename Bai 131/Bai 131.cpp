#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a1, b1, a2, b2, a3, b3;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
	float x, y, z;
	x = sqrt(pow((a2 - a1), 2) + pow((b2 - b1), 2));
	y = sqrt(pow((a3 - a1), 2) + pow((b3 - b1), 2));
	z = sqrt(pow((a3 - a2), 2) + pow((b3 - b2), 2));
	if (x + y > z && x + z > y && y + z > x)
	{
		cout << "La tam giac";
	}
	else
	{
		cout << "Khong la tam giac";
	}
	return 0;
}
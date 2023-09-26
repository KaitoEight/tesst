#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, y, z;
	cin >> x >> y >> z;
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
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, y, z;
	cin >> x >> y >> z;
	if (x + y > z && x + z > y && y + z > x)
	{
		if (x == y && y == z)
		{
			cout << "Deu";
		}
		else
		{
			if (x * x == y * y + z * z || y * y == z * z + x * x || z * z == y * y + x * x)
			{
				if (x == y || y == z || z == x)
				{
					cout << "Vuong can";
				}
				else
				{
					cout << "Vuong";
				}
			}
			else
			{
				
				if (x == y || y == z || z == x)
				{
					cout << "Can";
				}
				else
				{
					cout << "Thuong";
				}
				
			}
		}
	}
	else
	{
		cout << "Khong la Tam Giac";
	}
	return 0;
}
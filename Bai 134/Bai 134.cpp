#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, y, z;
	cin >> x >> y >> z;
	if (x <= y && y <= z)
	{
		cout << "BDT Dung";
	}
	else
	{
		cout << "BDT Sai";
	}
	return 0;
}
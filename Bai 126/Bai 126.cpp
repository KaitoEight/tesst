#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b;
	cin >> a >> b;
	float lc = a;
	if (lc < b)
	{
		lc = b;
	}
	cout << lc;
	return 0;
}
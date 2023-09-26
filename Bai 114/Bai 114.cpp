#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float at = -2;
	float tt = 3;
	float pp = 7;
	float ahh;
	int i = 2;
	while (i <= n)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
		i++;
		at = ahh;
	}
	cout << pp;
	return 0;
}
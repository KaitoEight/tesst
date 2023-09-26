#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int ahh = n;
	cout << ahh;
	while (ahh != 1)
	{
		if (ahh % 2 == 0)
		{
			ahh = ahh / 2;
		}
		else
		{
			ahh = 3 * ahh + 1;
		}
		cout << ahh;
	}
	return 0;
}
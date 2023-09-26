#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, y;
	cin >> x >> y;
	int  n = x;
	while (n <= y)
	{
		bool dk1 = ((n % 4 == 0) && (n % 100 != 0));
		bool dk2 = (n % 400 == 0);
		if (dk1 == 1 || dk2 == 1)
		{
			cout << n;
		}
		n++;
	}
	return 0;
}
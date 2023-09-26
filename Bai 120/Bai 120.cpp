#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float at = 2;
	float ahh;
	int i = 2;
	while (i <= n)
	{
		ahh = 5 * at + sqrt((24 * at * at) - 8);
		i++;
		at = ahh;
	}
	cout << ahh;
	return 0;
}
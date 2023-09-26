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
		ahh = ((at * at) + 2) / (2 * at);
		i++;
		at = ahh;
	}
	cout << ahh;
	return 0;
}
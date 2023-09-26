#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float at = 2;
	float bt = 1;
	float ahh, bhh;
	int i = 2;
	while (i <= n)
	{
		ahh = 2 * at + 3 * bt;
		bhh = at + 3 * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << ahh;
	return 0;
}
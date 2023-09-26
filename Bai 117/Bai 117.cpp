#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float att = -1;
	float at = 3;
	float ahh;
	float t = 2;
	int i = 2;
	while (i <= n)
	{
		t = t * 2;
		ahh = 5 * t + 5 * at - att;
		i++;
		att = at;
		at = ahh;
	}
	cout << ahh;
	return 0;
}
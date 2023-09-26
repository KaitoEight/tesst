#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float att = 1;
	float at = 1;
	float ahh;
	int i = 2;
	while (i <= n)
	{
		ahh = at + att;
		i++;
		att = at;
		at = ahh;
	}
	cout << ahh;
	return 0;
}
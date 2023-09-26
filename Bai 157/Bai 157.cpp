#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + (float)1 / i;
		cout << s;
	}
	return 0;
}
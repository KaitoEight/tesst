#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float S = 0;
	int m = 1;
	for (int i = 0; i <= n; i++)
	{
		m = m * (x + i);
		S = S + ((float)1 / m);
	}
	cout << S;
	return 0;
}
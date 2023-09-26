#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	float S = 0;
	int m = 1;
	for (int i = 1; i <= n; i++)
	{
		S = S + pow(i, k);
	}
	cout << S;
	return 0;
}
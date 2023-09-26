#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float S = 0;
	int t = 0;
	for (int i = 1; i <= n; i++)
	{
		t = t + i;
		S = S + (float)1/t;
	}
	cout << S;
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float S = 1;
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
		S = S + ((i + 1) * t);
	}
	cout << S;
	return 0;
}
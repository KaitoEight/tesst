#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float S = x;
	int t = x;
	for (int i = 3; i <= (2 * n) + 1; i = i + 2)
	{
		t = t * x * x;
		S = S + t;
	}
	cout << S;
	return 0;
}
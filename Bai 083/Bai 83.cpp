#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float S = 0;
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
		S = S + sin(t);
	}
	cout << S;
	return 0;
}
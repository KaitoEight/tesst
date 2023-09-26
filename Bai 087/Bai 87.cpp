#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float S = x;
	int t = x;
	int dau = -1;
	for (int i = 1; i <= (2*n)+1; i=i+2)
	{
		t = t * x * x;
		S = S + (dau * t);
		dau = -dau;
	}
	cout << S;
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int t = 1;
	int k = 0;
	while (t * 2 <= n)
	{
		t = t * 2;
		k = k + 1;
	}
	cout << k;
}
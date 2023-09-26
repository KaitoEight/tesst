#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int S = 0;
	int k = 0;
	while (S + k + 1 < n)
	{
		k = k + 1;
		S = S + k;
	}
	cout << k;
}
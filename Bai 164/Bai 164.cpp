#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float S = 1;

	for (int i = 1; i <= n; i++)
	{
		S = (float)1 / (1 + S);
	}
	cout << S;
}
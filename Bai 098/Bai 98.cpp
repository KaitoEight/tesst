#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float S = 0;
	for (int i = 2; i <= n; i++)
	{
		S = pow(sqrt(i + S),i);
	}
	cout << S;
	return 0;
}
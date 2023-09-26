#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float S = 0;
	for (int i = 1; i <= n; i++)
	{
		S = sqrt(i + S);
	}
	cout << S;
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float S = 0;
	float e = 0.5;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / (i*(i+1));
		S = S + e;
		i = i + 1;
	}
	cout << S;
	return 0;
}
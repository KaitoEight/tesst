#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float S = 0;
	int t = 1; 
	for (int i = 1; i <= n; i++)
	{
		t = t * i;
		S = pow(sqrt(t + S), i+1);
	}
	cout << S;
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float S = 0;
	int i = 1;
	while (i < n)
	{
		if (n % i == 0)
		{
			S = S + i;
		}
		i++;
	}
	if (S == n)
	{
		cout << "HT";
	}
	else
	{
		cout << "Ko HT";
	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int i = 1;
	int dem = 0;
	while (i <= n)
	{
		if (n % i == 0)
		{
			dem++;
		}
		i++;
	}
	if (dem == 2)
	{
		cout << "NT";
	}
	else
	{
		cout << "Ko NT";
	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int i = 0;
	int flag = 0;
	while (i <= n)
	{
		if (i * i == n)
		{
			flag = 1;
		}
		i++;
	}
	if (flag == 1)
	{
		cout << "CP";
	}
	else
	{
		cout << "Ko CP";
	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int flag = 1;
	int t = n;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 0)
		{
			flag = 0;
		}
		t = t / 10;
	}
	if (flag == 1)
	{
		cout << "TL";
	}
	else
	{
		cout << "Ko TL";
	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int flag = 1;
	int t = n;
	while (t >= 10)
	{
		int dv = t % 10;
		float hc = (t / 10) % 10;
		if (hc > dv)
		{
			flag = 0;
		}
		t = t / 10;
	}
	if (flag == 1)
	{
		cout << "Tang";
	}
	else
	{
		cout << "Khong tang";
	}
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int dem = 0;
	int t = n;
	int lc = n % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
		{
			lc = dv;
		}
		t = t / 10;
	}
	t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == lc)
		{
			dem++;
		}
		t = t / 10;
	}
	cout << dem;
	return 0;
}
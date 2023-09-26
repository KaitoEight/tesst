#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float dn = 0;
	int dv;
	int t = n;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == n)
	{
		cout << "La DX";
	}
	else
	{
		cout << "Ko DX";
	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool flag = true;
	int t = n;
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
		{
			flag = false;
		}
		t = t / 2;
	}
	if (flag == 1)
	{
		cout << "La dang";
	}
	else
	{
		cout << "Khong la dang";
	}
	return 0;
}
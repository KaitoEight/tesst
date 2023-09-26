#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool dk1 = ((n % 4 == 0) && (n % 100 != 0));
	bool dk2 = (n % 400 == 0);
	if (dk1 == 1 || dk2 == 1)
	{
		cout << "Nhuan";
	}
	else
	{
		cout << "Khong nhuan";
	}
	return 0;
}
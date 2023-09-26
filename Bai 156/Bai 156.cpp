#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * i;
		cout << t;
	}
	return 0;
}
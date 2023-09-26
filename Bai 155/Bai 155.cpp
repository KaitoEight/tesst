#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int t = 1;
	for (int i = 0; i <= n; i++)
	{
		t = t * 2;
		cout << t;
	}
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int xA, yA, xB, yB, xC, yC, xM, yM;
	cin >> xA >> yA >> xB >> yB >> xC >> yC >> xM >> yM;
	float SABC, SMAB, SMBC, SMAC;
	SABC = abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA*yC);
	SMAB = abs(xA * yB + xB * yM + xM * yA - xB * yA - xM * yB - xA * yM);
	SMBC = abs(xM * yB + xB * yC + xC * yM - xB * yA - xC * yB - xM * yC);
	SMAC = abs(xA * yM + xM * yC + xC * yA - xM * yA - xC * yM - xA * yC);
	float S = SMAB + SMBC + SMAC;
	if (S == SABC)
	{
		cout << "M trong";
	}
	else
	{
		cout << "M ngoai";
	}
	return 0;
}
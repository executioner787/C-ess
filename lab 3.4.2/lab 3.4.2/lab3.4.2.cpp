#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
bool isLeap(int year) {
	// Insert your code here
	bool leap = false;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				leap = true;
		}
		else
			leap = true;
	}

	return leap;
}int monthLength(int year, int month) {
	// Insert a new code here
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
		break;
	case 2:
		if (isLeap(year))
			return 29;
		else
			return 28;
		break;
	default:
		return 30;
		break;
	}
}
int main(void) {
	for (int yr = 2000; yr < 2002; yr++) {
		for (int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr, mo) << " ";
		cout << endl;
	}

	system("pause");
	return 0;
}
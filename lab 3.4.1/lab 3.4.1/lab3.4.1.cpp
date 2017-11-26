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
}
int main(void) {
	for (int yr = 1995; yr < 2017; yr++)
		cout << yr << " -> " << isLeap(yr) << endl;

	system("pause");
	return 0;
}
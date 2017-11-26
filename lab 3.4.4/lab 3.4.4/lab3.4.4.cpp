#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

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
}int dayOfYear(Date date) {
	// Insert your code here
	int day = 0;
	day += date.day;
	for (int i = 1; i < date.month; i++){
		day += monthLength(date.year, date.month - i);
	}

	return day;
}int daysBetween(Date d1, Date d2) {
	// Insert you code here
	int days = 0;
	if (dayOfYear(d2) > dayOfYear(d1)){
		days = dayOfYear(d2) - dayOfYear(d1);
	}
	else{
		if (isLeap(d2.year - 1)){
			d2.year -= 1;
			days = 366 + dayOfYear(d2) - dayOfYear(d1);
		}
		else{
			d2.year -= 1;
			days = 365 + dayOfYear(d2) - dayOfYear(d1);
		}
	}
	for (int i = d1.year; i < d2.year; i++){
		if (isLeap(i)){
			days += 366;
		}
		else{
			days += 365;
		}
	}

	return days;
}
int main(void) {
	Date since, till;
	cout << "Enter first date (y m d): ";
	cin >> since.year >> since.month >> since.day;
	cout << "Enter second date (y m d): ";
	cin >> till.year >> till.month >> till.day;
	cout << daysBetween(since, till) << endl;
	system("pause");
	return 0;
}
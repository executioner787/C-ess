#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	int year, month, day;
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter day: ";
	cin >> day;
	month -= 2;
	if (month <= 0){
		month += 12;
		year--;
	}
	month = (month * 83) / 32;
	month += day;
	month += year;
	month += year / 4;
	month -= year / 100;
	month += year / 400;
	month = remainder(month, 7);
	cout << month;
	system("pause");
	return 0;
}
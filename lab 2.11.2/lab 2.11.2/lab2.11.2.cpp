#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main(void) {
	struct TIME{
		int hour;
		int minute;
	}StartTime, EndTime, DiffTime;
	cin >> StartTime.hour;
	cin >> StartTime.minute;
	cin >> EndTime.hour;
	cin >> EndTime.minute;

	if (StartTime.minute > EndTime.minute){
		EndTime.minute += 60;
		EndTime.hour--;
	}
	DiffTime.hour = EndTime.hour - StartTime.hour;
	DiffTime.minute = EndTime.minute - StartTime.minute;

	cout << DiffTime.hour << ":" << DiffTime.minute << endl;

	system("pause");
	return 0;
}
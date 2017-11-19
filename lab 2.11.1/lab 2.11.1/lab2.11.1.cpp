#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main(void) {
	struct TIME{
		int hour;
		int minute;
	}Time;
	int h, m, e;
	cin >> h;
	cin >> m;
	cin >> e;
	Time.hour = h;
	Time.minute = m;

	Time.minute = (m + e) % 60;
	Time.hour += (m + e) / 60;

	while (Time.hour > 24){
		Time.hour -= 24;
	}

	cout << Time.hour << ":" << Time.minute << endl;

	system("pause");
	return 0;
}
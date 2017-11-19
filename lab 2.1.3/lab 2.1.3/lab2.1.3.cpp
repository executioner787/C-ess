#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	int sys, ft;
	float m, in;
	cout << "Choose the measurement system(0 for metric and 1 for imperial)" << endl;
	cin >> sys;
	if (sys == 0) {
		cout << "Enter the distance in meters" << endl;
		cin >> m;
		ft = 3 * m;
		in = (m * 27) / 8;
		cout << "Result: " << (ft > 0 ? ft : 0) << "'" << in << "\"" << endl;
	}
	else {
		cout << "Enter the distance in feet and inches" << endl;
		cin >> ft;
		cin >> in;
		m = (float)ft / 3 + (8 * in)/ 27;
		cout << "Result: " << m << "m" << endl;
	}
	system("pause");
	return 0;
}
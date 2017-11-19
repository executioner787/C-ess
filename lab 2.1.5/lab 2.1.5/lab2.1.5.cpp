#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	int year, a, b, c, d, e;
	cout << "Enter year: ";
	cin >> year;
	a = remainder(year, 19);
	b = remainder(year, 4);
	c = remainder(year, 7);
	d = remainder(a * 19 + 24, 30);
	e = remainder(2 * b + 4 * c + 6 * d + 5, 7);
	if (d + e < 10)
		cout << "March " << d + e + 22;
	else
		cout << "April " << d + e - 9;
	system("pause");
	return 0;
}

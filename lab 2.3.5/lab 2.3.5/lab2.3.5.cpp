#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	int n;
	cout << "Enter integer greater than 1: ";
	cin >> n;

	cout << '+';
	for (int i = 0; i < n-2; i++)
		cout << '-';
	cout << '+' << endl;
	for (int i = 0; i < n-2; i++) {
		cout << '|';
		for (int j = 0; j < n-2; j++)
			cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for (int i = 0; i < n-2; i++)
		cout << '-';
	cout << '+' << endl;

	system("pause");
	return 0;
}
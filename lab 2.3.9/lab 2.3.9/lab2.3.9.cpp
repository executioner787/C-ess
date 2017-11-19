#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	int n;
	long botnum;
	cout << "Enter odd number: ";
	cin >> n;

	botnum = n*n;
	botnum -= n * 2 - 2;

	cout << botnum << endl;
	system("pause");
	return 0;
}
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	int n;
	long fac = 1;
	cout << "Enter number: ";
	cin >> n;

	for (int i = 1; i < n+1; i++){
		fac *= i;
	}

	cout << endl << fac << endl;
	system("pause");
	return 0;
}
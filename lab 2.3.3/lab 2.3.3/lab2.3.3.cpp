#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	long n, num = 1;
	cout << "Enter number of iterations: ";
	cin >> n;

	for (long i = 0; i < n; i++){
		num *= 2;
	}

	cout << num << endl;
	system("pause");
	return 0;
}
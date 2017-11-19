#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	double pi = 0.;
	long n;
	cout << "Enter number of iterations: ";
	cin >> n;
	
	bool pos = true;
	double num = 1.;
	for (long i = 1; i < n; i++){
		if (pos){
			pos = false;
			pi += 1. / num;
		}
		else{
			pos = true;
			pi -= 1. / num;
		}
		num += 2;
	}

	cout.precision(20);
	cout << "Pi = " << (pi * 4.) << endl;
	system("pause");
	return 0;
}
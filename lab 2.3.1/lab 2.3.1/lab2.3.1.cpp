#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	int c0, steps = 0;
	cout << "Enter any non-negative and non-zero integer: ";
	cin >> c0;
	while (c0 > 1){
		if (c0 % 2 == 0){
			c0 /= 2;
		}
		else{
			c0 = 3 * c0 + 1;
		}
		cout << endl << c0;
		steps++;
	}
	cout << endl << "steps = " << steps << endl;
	system("pause");
	return 0;
}
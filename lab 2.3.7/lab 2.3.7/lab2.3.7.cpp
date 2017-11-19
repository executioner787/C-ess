#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	int n, prev1 = 0, prev2 = 0, temp;
	cout << "Enter number (>3): ";
	cin >> n;

	prev1 = 1;
	prev2 = 1;
	for (int i = 2; i < n; i++){
		temp = prev1 + prev2;
		prev2 = prev1;
		prev1 = temp;
	}

	cout << endl << temp << endl;
	system("pause");
	return 0;
}
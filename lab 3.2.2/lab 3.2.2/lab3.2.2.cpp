#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main(void) {
	int matrix[10][10] = {};
	// Insert your code here
	int *pointer1, *pointer2;
	for (int i = 0; i < 10; i++){
		pointer1 = matrix[i];
		for (int j = 0; j < 10; j++){
			*pointer1 = (i + 1)*(j + 1);
			pointer1 = pointer1 + 1;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
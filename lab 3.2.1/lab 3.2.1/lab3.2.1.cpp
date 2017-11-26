#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main(void) {
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);
	// Insert your code here
	int *pointer1, minvalue;
	pointer1 = vector;
	minvalue = *pointer1;
	for (int i = 0; i < n - 1; i++){
		pointer1 = pointer1 + 1;
		if (minvalue > *pointer1)
			minvalue = *pointer1;
	}
	cout << minvalue << endl;

	system("pause");
	return 0;
}
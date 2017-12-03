#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
	int *courses, rows;
	cin >> rows;
	courses = new int [rows];
	srand(time(NULL));
	for (int i = 0; i < rows; i++){
		courses[i] = rand() % 5 + 1;
	}
	//result
	long int sum = 0;
	for (int i = 0; i < rows; i++){
		sum += courses[i];
	}
	cout << sum << endl;

	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
	int **courses, rows, columns;
	cout << "Enter number of courses" << endl;
	cin >> rows;
	courses = new int *[rows];
	string grades;
	srand(time(NULL));
	for (int i = 0; i < rows; i++){
		courses[i] = new int[5];
		for (int j = 0; j < 5; j++){
			courses[i][j] = rand() % 5 + 1;
		}
	}
	//result
	float res = 0., temp = 0., div = 0.;
	for (int i = 0; i < rows; i++){
		cout << "Course " << i + 1 << ": grades: ";
		for (int j = 0; j < 5; j++){
			if (courses[i][j] >= 2){
				cout << courses[i][j] << " ";
				temp += courses[i][j];
				div++;
			}
		}
		cout << "final: " << temp / div << endl;
		res += temp / div;
		temp = 0.;
		div = 0.;
	}
	cout << "Overall final " << res / rows << endl;

	system("pause");
	return 0;
}
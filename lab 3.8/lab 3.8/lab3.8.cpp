#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

void increment(int& var){
	var++;
}
void increment(int& var, int& num){
	var += num;
}
void increment(float& var){
	var++;
}
void increment(float& var, double num){
	var += num;
}

int main(void) {
	int intvar = 0;
	float floatvar = 1.5;
	for (int i = 0; i < 10; i++)
		if (i % 2) {
			increment(intvar);
			increment(floatvar, sqrt(intvar));
		}
		else {
			increment(intvar, i);
			increment(floatvar);
		}
		cout << intvar * floatvar << endl;
	system("pause");
	return 0;
}
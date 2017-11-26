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

int main(void) {
	int var = 0;
	for (int i = 0; i < 10; i++)
		if (i % 2)
			increment(var);
		else
			increment(var, i);
	cout << var << endl;
	system("pause");
	return 0;
}
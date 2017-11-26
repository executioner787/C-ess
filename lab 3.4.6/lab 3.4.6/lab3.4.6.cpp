#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

bool isPrime(int num) {
	// Insert your code here
	if (num > 1){
		for (int i = 2; i < num; i++){
			if (num % i == 0)
				return false;
		}
		return true;
	}
	else{
		return false;
	}
}

int main(void) {
	for (int i = 0; i <= 21; i++)
		if (isPrime(i))
			cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}
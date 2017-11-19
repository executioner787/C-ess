#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	unsigned short int val, temp = 0;
	int num[16];
	bool ispalindrome = true;
	cout << "value = ";
	cin >> val;

	temp = val;
	for (int i = 0; i < 16; i++){
		num[i] = temp % 2;
		temp %= 2;
	}
	for (int i = 0; i < 8; i++){
		if (num[i] != num[15 - i]){
			ispalindrome = false;
		}
	}


	if (ispalindrome)
		cout << val << " is a bitwise palindrome" << endl;
	else
		cout << val << " is not a bitwise palindrome" << endl;

	system("pause");
	return 0;
}
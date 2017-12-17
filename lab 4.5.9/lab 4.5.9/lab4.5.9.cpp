#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
	string password;
	getline(cin, password);
	
	bool eightCharLong = false;
	bool UpperCase = false;
	bool LowerCase = false;
	bool digit = false;
	bool special = false;

	if (password.length() >= 8){
		eightCharLong = true;
	}
	for (int i = 0; i < password.length(); i++){
		switch (password[i])
		{
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			digit = true;
			break;
		case '!':
		case '@':
		case '#':
		case '$':
		case '%':
		case ':':
		case '&':
		case '*':
		case '(':
		case ')':
		case '-':
		case '_':
		case '=':
		case '+':
		case '[':
		case '{':
		case ']':
		case '}':
			special = true;
			break;
		default:
			if (password[i] == toupper(password[i])){
				UpperCase = true;
			}
			else{
				LowerCase = true;
			}
			break;
		}
	}
	if (!eightCharLong){
		cout << "The password must be 8 characters long" << endl;
	}
	if (!UpperCase){
		cout << "The password must have at least one upper case letter" << endl;
	}
	if (!LowerCase){
		cout << "The password must have at least one lower case letter" << endl;
	}
	if (!digit){
		cout << "The password must have at least one digit" << endl;
	}
	if (!special){
		cout << "The password must have at least one special character" << endl;
	}

	system("pause");
	return 0;
}
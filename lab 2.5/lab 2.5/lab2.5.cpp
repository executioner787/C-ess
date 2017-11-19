#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	int choise, num1, num2;
	cout << "MENU: " << endl << "0 - exit" << endl << "1 - addition" << endl << "2 - subtraction" << endl << "3 - multiplication" << endl << "4 - division" << endl << "Your choise?" << endl;
	cin >> choise;
	cout << "Enter first number" << endl;
	cin >> num1;
	cout << "Enter second number" << endl;
	cin >> num2;

	switch (choise)
	{
	case 1:
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		break;
	case 2:
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		break;
	case 3:
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		break;
	case 4:
		cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		break;
	default:
		cout << "Exit";
		break;
	}

	system("pause");
	return 0;
}
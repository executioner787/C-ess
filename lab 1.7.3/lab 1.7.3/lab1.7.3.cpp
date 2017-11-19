#include <iostream>
#include <iomanip>
#include <string>
int main(void) {
	bool correct = true;
	std::string result;
	int num1, num2, num3, num4;
	std::cout << "Enter IP address" << std::endl;
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;
	std::cin >> num4;
	if (num1 < 1 || num1 > 255)
		correct = false;
	if (num2 < 1 || num2 > 255)
		correct = false;
	if (num3 < 1 || num3 > 255)
		correct = false;
	if (num4 < 1 || num4 > 255)
		correct = false;
	if (correct)
		std::cout << std::endl << num1 << "." << num2 << "." << num3 << "." << num4 << std::endl;
	else
		std::cout << std::endl << "Wrong Data" << std::endl;
	system("pause");
	return 0;
}
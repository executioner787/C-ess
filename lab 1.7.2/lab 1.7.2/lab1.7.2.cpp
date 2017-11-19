#include <iostream>
#include <iomanip>
#include <string>
int main(void) {
	bool result;
	int num1, num2;
	std::cout << "Enter first number" << std::endl;
	std::cin >> num1;
	std::cout << std::endl << "Enter second number" << std::endl;
	std::cin >> num2;
	result = (1 / (float)num1) == (1 / (float)num2);
	std::cout << std::endl << (result ? "Results are equal (by 0.000001 epsilon)" : "Results are not equal (by 0.000001 epsilon)") << std::endl;
	system("pause");
	return 0;
}
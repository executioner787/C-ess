#include <iostream>
#include <iomanip>
int main(void) {
	float num1 = 2.3;
	float num2 = 2.123456;
	std::cout << num1 << std::endl;
	std::cout << std::fixed << std::setprecision(2) << num1 << std::endl;
	std::cout << std::setprecision(6) << num2 << std::endl;
	std::cout << std::setprecision(2) << num2 << std::endl;
	std::cout << std::setprecision(0) << num2 << std::endl;
	system("pause");
	return 0;
}
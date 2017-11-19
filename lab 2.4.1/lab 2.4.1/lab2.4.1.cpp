#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	int result = 0;
	long n, temp;
	cout << "Enter number: ";
	cin >> n;
	while (n!=-1){
		temp = n % 2;
		if (temp == 1){
			result++;
		}
		n = (n - 1) / 2;
		if (n == 1){
			result++;
			n = -1;
		}
		else if (n == 0){
			n = -1;
		}
	}


	cout << result << endl;
	system("pause");
	return 0;
}
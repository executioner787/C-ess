#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	int banknote[5] = { 50, 20, 10, 5, 1 };
	int sum, check;
	cout << "Enter sum of money" << endl;
	cin >> sum;
	for (int i = 0; i < 5; i++){
		while (sum - banknote[i]>=0){
			cout << banknote[i] << " ";
			sum -= banknote[i];
		}
	}
	cout << endl;

	system("pause");
	return 0;
}
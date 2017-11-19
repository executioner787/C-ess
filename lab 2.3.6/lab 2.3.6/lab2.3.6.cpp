#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	int n;
	cout << "Enter height (2<h<9): ";
	cin >> n;

	for (int i = 0; i < n; i++){
		if (i == 0){
			for (int j = 0; j < 8; j++){
				cout << " ";
			}
			cout << "*";
			for (int j = 0; j < 17; j++){
				cout << " ";
			}
			cout << "*";
			for (int j = 0; j < 17; j++){
				cout << " ";
			}
			cout << "*" << endl;
		}
		else if (i == n - 1){
			for (int j = 0; j < 8 - i; j++){
				cout << " ";
			}
			cout << "*";
			for (int j = 0; j < 2 * i - 1; j++){
				cout << "*";
			}
			cout << "*";

			for (int j = 0; j < 17 - 2 * i; j++){
				cout << " ";
			}
			cout << "*";
			for (int j = 0; j < 2 * i - 1; j++){
				cout << "*";
			}
			cout << "*";

			for (int j = 0; j < 17 - 2 * i; j++){
				cout << " ";
			}
			cout << "*";
			for (int j = 0; j < 2 * i - 1; j++){
				cout << "*";
			}
			cout << "*" << endl;
		}
		else{
			for (int j = 0; j < 8 - i; j++){
				cout << " ";
			}
			cout << "*";
			for (int j = 0; j < 2 * i - 1; j++){
				cout << " ";
			}
			cout << "*";
			
			for (int j = 0; j < 17 - 2 * i; j++){
				cout << " ";
			}
			cout << "*";
			for (int j = 0; j < 2 * i - 1; j++){
				cout << " ";
			}
			cout << "*";

			for (int j = 0; j < 17 - 2 * i; j++){
				cout << " ";
			}
			cout << "*";
			for (int j = 0; j < 2 * i - 1; j++){
				cout << " ";
			}
			cout << "*" << endl;
		}
	}


	system("pause");
	return 0;
}
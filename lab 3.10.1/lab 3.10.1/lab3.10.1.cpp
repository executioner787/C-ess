#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
	int maxball;
	int ballsno;
	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;
	srand(time(NULL));
	// Insert your code here
	int note[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
			cout << note[2] << " ";
			int rnd, j;
	bool check = true;
	for (int i = 0; i < ballsno; i++){
		j = 0;
		rnd = rand() % maxball + 1;
		while (note[j] != 0){
			if (rnd == note[j])
				check = false;
			j++;
		}
		if (check){
			cout << rnd << " ";
			note[j] = rnd;
		}
		else{
			i--;
			check = true;
		}
	}

	system("pause");
	return 0;
}
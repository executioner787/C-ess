#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
	bool is_pangram = true;
	int *letters, i = 0;
	letters = new int [26];
	string phrase;
	cin >> phrase;
	for (int j = 0; j < 26; j++){
		letters[j] = 0;
	}
	for (string::iterator chr = phrase.begin(); chr != phrase.end(); chr++){
		if (phrase[i] == 'a')
			letters[0]++;
		if (phrase[i] == 'b')
			letters[1]++;
		if (phrase[i] == 'c')
			letters[2]++;
		if (phrase[i] == 'd')
			letters[3]++;
		if (phrase[i] == 'e')
			letters[4]++;
		if (phrase[i] == 'f')
			letters[5]++;
		if (phrase[i] == 'g')
			letters[6]++;
		if (phrase[i] == 'h')
			letters[7]++;
		if (phrase[i] == 'i')
			letters[8]++;
		if (phrase[i] == 'j')
			letters[9]++;
		if (phrase[i] == 'k')
			letters[10]++;
		if (phrase[i] == 'l')
			letters[11]++;
		if (phrase[i] == 'm')
			letters[12]++;
		if (phrase[i] == 'n')
			letters[13]++;
		if (phrase[i] == 'o')
			letters[14]++;
		if (phrase[i] == 'p')
			letters[15]++;
		if (phrase[i] == 'q')
			letters[16]++;
		if (phrase[i] == 'r')
			letters[17]++;
		if (phrase[i] == 's')
			letters[18]++;
		if (phrase[i] == 't')
			letters[19]++;
		if (phrase[i] == 'u')
			letters[20]++;
		if (phrase[i] == 'v')
			letters[21]++;
		if (phrase[i] == 'w')
			letters[22]++;
		if (phrase[i] == 'x')
			letters[23]++;
		if (phrase[i] == 'y')
			letters[24]++;
		if (phrase[i] == 'z')
			letters[25]++;
		i++;
	}
	for (int j = 0; j < 26; j++){
		cout << letters[j] << endl;
		if (letters[j] == 0)
			is_pangram = false;
	}
	if (is_pangram)
		cout << "Pangram" << endl;
	else
		cout << "Not Pangram" << endl;

	system("pause");
	return 0;
}
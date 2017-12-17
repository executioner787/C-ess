#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
	string from;
	getline(cin, from);
	string to;
	getline(cin, to);
	string sentence;
	getline(cin, sentence);
	// change all occurrences of 'from' into 'to' in the sentence
	string word = "", temp = "";
	for (int i = 0; i < sentence.length(); i++){
		if (sentence[i] = ' '){
			if (word == from){
				temp += to + " ";
			}
			else{
				temp += word + " ";
			}
			word = "";
		}
		else{
			word += sentence[i];
		}
	}
	sentence = temp;

	cout << sentence << "\n";

	system("pause");
	return 0;
}
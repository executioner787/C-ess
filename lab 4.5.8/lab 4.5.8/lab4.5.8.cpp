#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
	string sentence;
	getline(cin, sentence);
	string new_sent = "";
	
	for (int i = 0; i < sentence.length(); i++){
		if (sentence[i] == '*'){
			string word = "";
			for (int j = i + 1; j < sentence.length(); j++){
				if (sentence[j] == '*'){
					i = j;
					j = sentence.length();
					new_sent += word;
				}
				else if (sentence[j] == '_'){
					i = j;
					j = sentence.length();
				}
				else{
					word += toupper(sentence[j]);
				}
			}
		}
		else if (sentence[i] == '_'){
			string word = "";
			for (int j = i + 1; j < sentence.length(); j++){
				if (sentence[j] == '*'){
					i = j;
					j = sentence.length();
				}
				else if (sentence[j] == '_'){
					i = j;
					j = sentence.length();
					new_sent += word;
				}
				else{
					word += sentence[j] + ' ';
				}
			}
		}
		else{
			new_sent += sentence[i];
		}
	}
	sentence = new_sent;

	cout << sentence << "\n";

	system("pause");
	return 0;
}
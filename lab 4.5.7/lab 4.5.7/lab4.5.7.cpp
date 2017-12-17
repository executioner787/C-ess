#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
	string pattern;
	getline(cin, pattern);
	string sentence;
	getline(cin, sentence);
	// match pattern against sentence
	int len = pattern.length();
	int j = 0;
	string result = "";
	for (int i = 0; i < sentence.length(); i++){
		switch (pattern[j])
		{
		case 'D':
			switch (sentence[i])
			{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				result += sentence[i];
				if (j == len){
					cout << result << "\n";
					i -= j + 1;
					j = 0;
					result = "";
				}
				else{
					j++;
				}
				break;
			default:
				i -= j+1;
				j = 0;
				result = "";
				break;
			}
			break;
		case 'A':
			switch (sentence[i])
			{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				i -= j + 1;
				j = 0;
				result = "";
				break;
			default:
				result += sentence[i];
				if (j == len){
					cout << result << "\n";
					i -= j + 1;
					j = 0;
					result = "";
				}
				else{
					j++;
				}
				break;
			}
			break;
		case '?':
			result += sentence[i];
			if (j == len){
				cout << result << "\n";
				i -= j + 1;
				j = 0;
				result = "";
			}
			else{
				j++;
			}
			break;
		default:
			if (pattern[j] == sentence[i]){
				result += sentence[i];
				if (j == len){
					cout << result << "\n";
					i -= j + 1;
					j = 0;
					result = "";
				}
				else{
					j++;
				}
			}
			break;
		}
	}


	cout << sentence << "\n";

	system("pause");
	return 0;
}
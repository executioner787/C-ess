#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
	bool is_anagrams = false;
	string anagrams;
	getline(cin, anagrams);
	string word1 = "";
	string word2 = "";
	bool check = false;
	for (int i = 0; i < anagrams.length(); i++){
		if (anagrams[i] == ' '){
			check = true;
		}
		else{
			if (check){
				word2 += anagrams[i];
			}
			else{
				word1 += anagrams[i];
			}
		}
	}
	if (word1.length() == word2.length()){
		char letter;
		int num = 0;
		bool temp = true;
		for (int i = 0; i < word1.length(); i++){
			letter = word1[i];
			for (int j = 0; j < word1.length(); j++){
				if (word1[j] == letter){
					num++;
				}
			}
			for (int j = 0; j < word2.length(); j++){
				if (word2[j] == letter){
					num--;
				}
			}
			if (num != 0){
				temp = false;
			}
		}
		if (temp){
			is_anagrams = true;
		}
	}


	if (is_anagrams){
		cout << "anagrams" << "\n";
	}
	else{
		cout << "not anagrams" << "\n";
	}

	system("pause");
	return 0;
}
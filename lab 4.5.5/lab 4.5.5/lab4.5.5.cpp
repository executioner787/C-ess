#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
	string stop_words;
	getline(cin, stop_words);
	string sentence;
	getline(cin, sentence);
	// remove stop_words from sentence here
	string word = "";
	bool check = false;
	for (int i = 0; i < stop_words.length(); i++){
		if (stop_words[i] == ','){
			if (word != ""){
				check = true;
			}
			else{
				check = false;
			}
		}
		else{
			word += stop_words[i];
			check = false;
		}
		if (check){
			char temp = word[0];
			string new_sentence = "";
			for (int j = 0; j < sentence.length(); j++){
				if (temp == sentence[j] && sentence[j-1]==' '){
					bool is_word = true;
					int k = 0;
					for (; k < word.length(); k++){
						if (word[k] != sentence[j + k]){
							is_word = false;
						}
					}
					if (is_word){
						j += k;
					}
					else{
						new_sentence += sentence[j];
					}
				}
				else{
					new_sentence += sentence[j];
				}
			}
			sentence = new_sentence;
			word == "";
		}
	}

	cout << sentence << "\n";

	system("pause");
	return 0;
}
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
	getline(std::cin, sentence);
	// manipulate the sentence here
	bool space = false;
	string temp = "";
	for (int i = 0; i < sentence.length(); i++){
		if (sentence[i] == ' '){
			if (!space){
				temp += sentence[i];
				space = true;
			}
		}
		else{
			space = false;
			temp += sentence[i];
		}
	}
	sentence = temp;

	cout << sentence << "\n";

	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
	string values;
	getline(cin, values);
	string templates;
	getline(std::cin, templates);
	// Put values into the template
	string new_sent = "";
	for (int i = 0; i < templates.length(); i++){
		if (templates[i] == '['){
			string value = "";
			for (int j = i + 1; j < templates.length(); j++){
				if (templates[j] == ']'){
					i = j;
					j = templates.length();
				}
				else{
					value += templates[j];
				}
			}
			string cval = "";
			bool check = true;
			for (int j = 0; j < values.length(); j++){
				if (values[j] != '=' && check){
					cval += values[j];
				}
				else if (values[j] == ','){
					check = true;
					cval = "";
				}
				else{
					check = false;
					if (cval == value && values[j]!='='){
						new_sent += values[j];
					}
				}
			}
		}
		else{
			new_sent += templates[i];
		}
	}
	templates = new_sent;

	cout << templates << "\n";

	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

string checkIP(string input){
	int result = 0;
	int *ip, j = 0;
	ip = new int[4];
	string temp = "";
	for (int i = 0; i < input.length(); i++){
		if (input[i] == '.'){
			if (temp.length() > 3){
				if (result == 0)
					result = 2;//Too many characters in a part == 2
			}
			try{
				ip[j] = stoi(temp);
				j++;
				if (j > 4){
					if (result == 0)
						result = 3;//Too many parts == 3
				}
				temp = "";
			}
			catch(exception e){
				if (result == 0)
					result = 4;//Only digits and dots allowed == 4
			}
		}
		else{
			temp += input[i];
		}
	}
	switch (result)
	{
	case 2:
		return "Too many characters in a part";
		break;
	case 3:
		return "Too many parts";
		break;
	case 4:
		return "Only digits and dots allowed";
		break;
	case 5:
		return "Too big a value of a part";
		break;
	default:
		return "Correct IP";//Correct IP == 1
		break;
	}
}

int main(void) {
	string ip;
	cout << "Enter IP: ";
	cin >> ip;
	cout << endl << checkIP(ip) << endl;

	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
//your code
vector<int> addVectorValues(vector<int> vec1, vector<int> vec2){
	vector<int> result(10);
	for (int i = 0; i < 10; i++){
		result[i] = vec1[i] + vec2[i];
	}
	return result;
}
vector<int> subtractVectorValues(vector<int> vec1, vector<int> vec2){
	vector<int> result(10);
	for (int i = 0; i < 10; i++){
		result[i] = vec1[i] - vec2[i];
	}
	return result;
}
void printVector(vector<int> vec){
	for (int i = 0; i < 10; i++){
		cout << vec[i] << " ";
	}
	cout << endl;
}
int main()
{
	vector<int> values = { 6, 5, 7, 3, 4, 6, 5, 7, 3, 4 };
	//your code
	vector<int> vec2(10);
	vector<int> vec3(10);
	fill(vec2.begin(), vec2.begin() + 10, 3);
	fill(vec3.begin(), vec3.begin() + 10, 2);
	cout << "Enter a number of elements to fill with 5" << endl;
	int num;
	cin >> num;
	fill(values.begin(), values.begin() + num, 5);
	vector<int> vec4 = addVectorValues(values, vec2);
	vector<int> vec5 = subtractVectorValues(values, vec3);
	printVector(vec4);
	printVector(vec5);

	cout << endl;
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

struct Collection {
	int elno;
	int *elements;
};
void AddToCollection(Collection &col, int element) {
	// Insert your code here
	int *array;
	bool check = false;
	switch (col.elno)
	{
	case 1:
		array = new int[2];
		break;
	case 2:
		array = new int[3];
		break;
	case 3:
		array = new int[4];
		break;
	case 4:
		array = new int[5];
		break;
	case 5:
		array = new int[6];
		break;
	case 6:
		array = new int[7];
		break;
	case 7:
		array = new int[8];
		break;
	case 8:
		array = new int[9];
		break;
	case 9:
		array = new int[10];
		break;
	case 10:
		array = new int[11];
		break;
	default:
		array = new int[1];
		array[0] = element;
		check = true;
		col.elno = 1;
		col.elements = array;
		break;
	}
	if (!check){
		for (int i = 0; i < col.elno; i++){
			array[i] = *col.elements;
			col.elements = col.elements + 1;
		}
		array[col.elno + 1] = element;
		col.elno++;
	}
}
void PrintCollection(Collection col) {
	cout << "[ ";
	for (int i = 0; i < col.elno; i++)
		cout << col.elements[i] << " ";
	cout << "]" << endl;
}

int main(void) {
	Collection collection = { 0, NULL };
	int elems;
	cout << "How many elements? ";
	cin >> elems;
	srand(time(NULL));
	for (int i = 0; i < elems; i++)
		AddToCollection(collection, rand() % 100 + 1);
	PrintCollection(collection);
	delete[] collection.elements;

	system("pause");
	return 0;
}
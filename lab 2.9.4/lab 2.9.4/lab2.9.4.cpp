#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main(void) {
	double vector[] = { 1., 2., 3., 4., 5. };
	double temp = 0.;
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithmeticMean;
	double HarmonicMean;
	double GeometricMean;
	double RootMeanSquare;
	// Insert your code here
	temp = 0.;
	for (int i = 0; i < n; i++){
		temp += vector[i];
	}
	ArithmeticMean = temp / n;

	temp = 0.;
	for (int i = 0; i < n; i++){
		temp += 1. / vector[i];
	}
	HarmonicMean = n / temp;

	temp = 1.;
	for (int i = 0; i < n; i++){
		temp *= vector[i];
	}
	GeometricMean = pow(temp, 1. / n);

	temp = 0.;
	for (int i = 0; i < n; i++){
		temp += vector[i] * vector[i];
	}
	RootMeanSquare = sqrt(temp / n);

	cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean = " << HarmonicMean << endl;
	cout << "Geometric Mean = " << GeometricMean << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;
	cout << endl;

	system("pause");
	return 0;
}
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	float grossprice, taxrate, netprice, taxvalue;
	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;
	taxrate /= 100;
	//grossprice = netprice + taxvalue
	//taxrate = taxvalue / netprice
	//taxvalue = taxrate * netprice
	//grossprice = netprice ( 1+ taxrate)
	netprice = grossprice / (1 + taxrate);
	taxvalue = taxrate * netprice;
	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	system("pause");
	return 0;
}
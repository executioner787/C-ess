#include <iostream>
#include <string>
using namespace std;
class Square
{
public:
	Square(double side);
	double side;
	double area;
	// Your code here
};
Square::Square(double side)
{
	this->side = side;
	this->area = side * side;
}
void print(Square* square)
{
	cout << "Square: side=" << square->side << " area=" square->area << endl;
}
int main()
{
	Square s(4);
	print("square);
		s.side = 2.0;
	print("square);
		s.side = -33.0;
	print("square);
		return 0;
}
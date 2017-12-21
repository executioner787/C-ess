class AdHocSquare
{
public:
	AdHocSquare(double side);
	void set_side(double side);
	double get_area();
private:
	double side;
};
class LazySquare
{
public:
	AdHocSquare(double side);
	void set_side(double side);
	double get_area();
private:
	double side;
	double area;
	bool side_changed;
};
#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	string name;
	int age;
	// Your code here
};
void print(Person* person)
{
	cout << person->name << " is " person->age << " years old" << endl;
}
int main()
{
	Person person;
	person.name = "Harry";
	person.age = 23;
	cout << "Meet " << person.name();
	print(&person);
	// Your code here
	return 0;
}
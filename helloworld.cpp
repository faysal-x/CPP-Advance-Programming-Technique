#include <iostream>
//#include <conio.h>
using namespace std;


class student
{public:
	int id;
	float cgpa;
	string name;

void display()
{
	cout << id << endl << cgpa << endl << name << endl;
}

void setdata(int i, float cg, string nam)
{
	id = i; cgpa = cg; name = nam;
}
};

int main()
{
	student obj1, obj2, obj3, obj4;
	obj1.setdata(101, 3.4, "Faysal");
	obj2.setdata(102, 3.5, "Shafi");
	obj3.setdata(103, 3.1, "Sadman");
	obj4.setdata(104, 3.8, "Sakib");

	obj1.display();
	obj2.display();
	obj3.display();
	obj4.display();	

	return 0;
}
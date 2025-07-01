#include <iostream>
using namespace std;

class student{
    public:
        int id;
        double gpa;

        void display(){
            cout << id << endl << gpa << endl;
        }


        //constructor function

        // Default constructor
        student(int i, double cg)
        {
            id = i;
            gpa = cg;
        }

        // Parameterized constructor
        student()
        {
            cout << "Default constructor" << endl;
        }

};

int main()
{

    student sadman;

    student faysal(1001, 3.8);
    student shafi(1002, 3.5);

    faysal.display();
    shafi.display();

    return 0;
}
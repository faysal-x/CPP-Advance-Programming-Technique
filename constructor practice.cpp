#include <iostream>
#include <string> 
using namespace std;

class employee {
    public:
        string name;
        int age;
        string home;

        employee(string n, int ag, string hom)
        {
            name =n;
            age = ag;
            home = hom;
            cout << "parameterized constructor is called" << endl;
        };

        employee(){
            cout << "Default constructor is called" << endl;
        };

        ~employee(){
            cout << "destructor is called" << endl;
        };

        void display(){
            cout << "Name: " << name << ", Age: " << age << ", Home: " << home << endl;
        };

};

int main(){

    employee faysal("Faysal", 25, "Dhaka");
    faysal.display();

    employee salman;
    salman.display();





    return 0;
}
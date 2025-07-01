#include <iostream>
#include <string>

using namespace std;

class student{
    public:
        string name;
        int id;
        string hometown;

        student(string n, int i, string h) {
            name = n;
            id = i;
            hometown = h;
            cout << "Student created" << endl;
        }

        void display() {
            cout << "Name: " << name << ", ID: " << id << ", Hometown: " << hometown << endl;
        }

        ~student(){
            cout << "Student destroyed" << endl;

        }
    };

    int main(){

        student s1("Alice", 101, "New York");
        s1.display();

        student s2("Bob", 102, "Los Angeles");
        s2.display();

        return 0;

    }
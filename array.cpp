#include<iostream>
using namespace std;

class friends{
    public:
        string name;
        int age;

        void input(string n, int a) {
            name = n;
            age = a;
        }   

        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
               
};

int main() {
    
    friends myFriends[3];

    for(int i = 0; i < 3; i++) {
        string name;
        int age;

        cout << "Enter name of friend: " << (i + 1) << ": ";
        cin >> name;
        cout << "Enter age of friend: " << (i + 1) << ": ";
        cin >> age;

        myFriends[i].input(name, age);
    }

    for(int i = 0; i < 3; i++) {
        cout << "Friend " << (i + 1) << " details:" << endl;
        myFriends[i].display();
    }
    return 0;
}

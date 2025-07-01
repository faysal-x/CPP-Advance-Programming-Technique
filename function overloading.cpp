#include <iostream>
using namespace std;


void sum(int a, int b) {
    int sum = a + b;
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
}

void sum(int a, int b, int c) {
    int sum = a + b + c;
    cout << "Sum of " << a << ", " << b << ", and " << c << " is: " << sum << endl;
}

int main() {
    int x, y, z;

    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Enter a third integer: ";
    cin >> z;

    sum(x, y);      
    sum(x, y, z);   

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    char op;
    double num1, num2, result;
    
    cout << "------------- CALCULATOR -------------" << endl << endl;
    
    cout << "Enter (+ - * /):" << endl;
    cin >> op;
    
    cout << "Enter num1: " << endl;
    cin >> num1;
    
    cout << "Enter num1: " << endl;
    cin >> num2;
    
    switch(op){
        case "+":
        result = num1 + num2;
        cout << "Result: " << result;
        break;
        
        case "-":
        result = num1 - num2;
        cout << "Result: " << result;
        break;
        
        case "*":
        result = num1 * num2;
        cout << "Result: " << result;
        break;
        
        case "/":
        result = num1 / num2;
        cout << "Result: " << result;
        break;
        
    }
    
    
    
    
    
    return 0;
}
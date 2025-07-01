/*
# Recursion is a process that a function can call itself directly or indirectly.

# to stop the recursion, we need a base case that will stop the recursion.

# 2 important things to remember:
    1. Base case: A condition that stops the recursion.
    2. Recursive case: The part of the function that calls itself.
*/

#include <iostream>
using namespace std;

int fact(int n){

    if(n == 0 || n ==1)
        return 1;
    else 
        return n*fact(n-1);
    
}

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int factorial =  fact(n);
    cout << "Factorial is: " << factorial << endl;


    return 0;
}

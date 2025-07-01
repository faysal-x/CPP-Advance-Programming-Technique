#include<iostream>
using namespace std;

int main(){

    int matrix[10][10], n, i, j;

    cout << "Enter n: ";
    cin >> n; 

//scanning the matrix
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << "Enter 2" << i+1 << j+1 << ":";
            cin >> matrix[i][j];
        }

    }
    

    cout << "\n\n" << "The matrix is: " << "\n";
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}
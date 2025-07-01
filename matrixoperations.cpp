/**/

#include<iostream>
using namespace std;

int main(){

    int matrix1[10][10], matrix2[10][10],  n, i, j;

    cout << "Enter n: ";
    cin >> n; 
    cout << "\n\n";

//scanning matrix1
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << "Enter " << i+1 << j+1 << ":";
            cin >> matrix1[i][j];
        }

    }

        cout << "\n";


//scanning matrix2
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << "Enter " << i+1 << j+1 << ":";
            cin >> matrix2[i][j];
        }

    }

    cout << "\n\n";

    
//printing matrix1
    cout << "\n\n" << "The matrix1 is: " << "\n";
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << matrix1[i][j] << " ";
        }
        cout << "\n";
    }

//printing matrix2
    cout << "\n\n" << "The matrix2 is: " << "\n";
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << matrix2[i][j] << " ";
        }
        cout << "\n";
    }


//adding matrix1 and matrix2

    
















    return 0;
}

*/
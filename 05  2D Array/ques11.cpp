// Write a C++ program to transpose a matrix

#include <iostream>
using namespace std;
int main(){

    int arr[3][3];
    int transpose[3][3];
    int i,j;

    cout << "Enter the elements of 1st array: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Elements of 1st array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            transpose[i][j] = arr[j][i];
        }
    }

    cout << "New array is: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j  < 3; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// Write a C++ program to multiply two matrices

#include <iostream>
using namespace std;
int main(){

    int arr1[3][3] = {};
    int arr2[3][3] = {};
    int arr3[3][3] = {};
    int i,j;

    cout << "Enter the elements of 1st array: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr1[i][j];
        }
    }

    cout << "Elements of 1st array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the elements of 2nd matrix: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr2[i][j];
        }
    }

    cout << "Elements of 2nd matrix are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            arr3[i][j] = arr1[i][j]*arr2[i][j];
        }
    }

    cout << "New matrix is: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// Write a C++ program to interchange the elements of two matrices

#include <iostream>
using namespace std;
int main(){

    int arr1[3][3] = {};
    int arr2[3][3] = {};
    int i,j;

    cout << "Enter the elements of 1st matrix: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr1[i][j];
        }
    }

    cout << "Elements of 1st matrix are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the elements of 2nd matrix: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >>  arr2[i][j];
        }
    }

    cout << "Elements of the 2nd matrix are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }


    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            int temp[3][3] = {};
            temp[i][j] = arr1[i][j];
            arr1[i][j] = arr2[i][j];
            arr2[i][j] = temp[i][j];
        }
    }


    cout << "New elements of 1st matrix are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "New elements of 2nd matrix are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
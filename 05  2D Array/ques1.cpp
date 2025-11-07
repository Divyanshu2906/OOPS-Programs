// Write a C++ program to display the sum of matrix 

#include <iostream>
using namespace std;
int main(){


    int arr[3][3];
    int i,j;

    cout << "Enter the elements of the array: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Elements in the array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int sum = 0;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            sum += arr[i] [j];
        }
    }

    cout << "Total sum is: " << sum << endl;

    return 0;
}


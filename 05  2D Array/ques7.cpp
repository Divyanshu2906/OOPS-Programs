// Write a C++ program to display the sum of two matrices in a third matrix

#include <iostream>
using namespace std;
int main(){

    int arr[3][3] = {};
    int arr2[3][3] = {};
    int sum[3][3] = {};
    int i,j,k;

    cout << "Enter the elements of 1st matrix: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Elements of 1st matrix are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the elements of 2nd array: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr2[i][j];
        }
    }

    cout << "Elements of 2nd array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    cout << "New array is: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

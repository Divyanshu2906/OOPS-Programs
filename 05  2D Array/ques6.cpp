// Write a C++ program to get the sum of every digit in a 2D array

#include <iostream>
using namespace std;
int main(){

    int arr[3][3] = {};
    int sum[3][3] = {};
    int i,j;

    cout << "Enter the elements of the array: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "The elements of the array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            int digitsum = 0;
            int num = arr[i][j];
            while ( num > 0){
                digitsum += num % 10;
                num /= 10;
            }
            sum[i][j] = digitsum;
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
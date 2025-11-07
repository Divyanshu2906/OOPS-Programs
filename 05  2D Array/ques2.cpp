// Write a C++ program to count positive and negative numbers in a 2D array

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


    int positive = 0;
    int negative = 0;

    for ( i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (arr[i][j] > 0){
                positive++;
            }
            else{
                negative++;
            }
        }
    }

    cout << "There are " << positive << " positive numbers in this 2D array" << endl;
    cout << "There are " << negative << " negative numbers in this 2D array" << endl;

    return 0;
}

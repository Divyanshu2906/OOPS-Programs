// Write a C++ program to sort the elements in a 2D array

#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int temp[9];  
    int i, j, k = 0;

    cout << "Enter the elements of the array: ";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> arr[i][j];
            temp[k++] = arr[i][j]; 
        }
    }

    for (i = 0; i < 9 - 1; i++) {
        for (j = 0; j < 9 - i - 1; j++) {
            if (temp[j] > temp[j + 1]) {
                int t = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = t;
            }
        }
    }


    k = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            arr[i][j] = temp[k++];
        }
    }

    cout << "Sorted array: \n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
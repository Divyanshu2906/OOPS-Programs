// Write a C++ program to accept 10 numbers from user and display them

#include <iostream>
using namespace std;
int main(){

    int arr[10];
    int i;
    int sum = 0;

    cout << "Enter the elements of the array: ";
    for ( int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    cout << "The elements of the array are: ";
    for ( i = 0; i < 10; i++){
        cout << arr[i];
    }

    for ( i = 0; i < 10; i++){
        sum = sum + arr[i];
    }

    cout << "\nThe sum of the elements is: " << sum << endl;
    return 0;
}
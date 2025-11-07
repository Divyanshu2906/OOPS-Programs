// Write a C++ program to check for palindrome number in a 2D array

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

    cout << " Elements in the array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int ispal = 0;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            int original = arr[i][j];
            int temp = arr[i][j];
            int digits = 0;
            int rev = 0;
            while ( temp > 0){
                digits = temp % 10;
                rev = rev*10 + digits;
                temp /= 10;
            }

            if ( original == rev){
                ispal++;
                cout << arr[i][j] << " is a palindrome" << endl;
            }
        }
    }

    cout << "There are " << ispal << " palindrome numbers in this array";
    return 0;
}

// Write a C++ program to check for armstrong number in a 2D array

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

    int isarmstrong = 0;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            int temp = arr[i][j];
            int digits = 0;
            while ( temp > 0){
                digits++;
                temp /= 10;
            }
            int sum = 0;
            temp = arr[i][j];
            while ( temp > 0){
                int digit = temp % 10;
                int power = 1;
                for ( int k = 0; k < digits; k++){
                    power *= digit;
                }

                sum += power;
                temp /= 10;
            }

            if ( arr[i][j] == sum){
                isarmstrong++;
                cout << arr[i][j] << " is a armstrong number" << endl;
            }
        }
    }

    cout << "There are " << isarmstrong << "  armstrong numbers in this array " << endl;
    return 0;
}
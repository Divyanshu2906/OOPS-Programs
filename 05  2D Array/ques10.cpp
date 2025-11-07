// Write a C++ program to display the sum of the elements in the 2D array

#include <iostream>
using namespace std;
int main(){

    int arr[3][3];
    int i,j;

    cout << "Enter the elements of the array: ";
    for ( i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }
    
    cout << "Elements of the array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    int sumarr[i][j] = {};
    cout << "New matrix: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            int digits = 0;
            int sum = 0;
            int temp = arr[i][j];
            while( temp > 0){
                digits = temp % 10;
                sumarr[i][j] += digits;
                temp /= 10; 
            } 
            cout << sumarr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// Write a C++ program to check for a prime number in a 2D array 

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

    int k;
    int isprime = 0;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            bool prime = true;
            if (arr[i][j] < 2){
                prime = false;
            }   
            else{
                for ( k = 2; k*k <= arr[i][j]; k++){
                    if ( arr[i][j] % k == 0){
                        prime = false;
                        break;
                    }
                }
            }
            if (prime){
                isprime++;
                cout << arr[i][j] << " is a prime number" << endl;
            }
            else{
                cout << arr[i][j] << " is not a prime number" << endl;
            }
        }
    }

    cout << "There are " << isprime << " prime numbers in this 2D array" << endl;
    
    return 0;
}

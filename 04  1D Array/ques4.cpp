// Write a C++ program to create an array of 10 numbers and count all perfect numbers

#include <iostream>
using namespace std;
int main(){

    int arr[10];
    int count = 0;

    cout << "The elements in the array are: ";
    for ( int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    for ( int i = 0; i < 10; i++){
        int num = arr[i];
        int sum = 0;

        for ( int j = 1; j < num; j++){
            if ( num % j == 0){
                sum += j;   
            }
        }
        if ( sum == num && num != 0){
            count++;
        }
    }


    cout << "There are " << count << " perfect numbers";

    return 0;
}
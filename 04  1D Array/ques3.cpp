// Write a C++ program to accept 10 numbers array and count the 2 digits even numbers

#include <iostream>
using namespace std;
int main(){

    int arr[10];
    int i;
    int even = 0;

    cout << "Enter the elements of the array; ";
    for ( i = 0; i < 10; i++){
        cin >> arr[i];
    }

    for ( i = 0; i < 10; i++){
        if ( arr[i] >= 10){
            if ( arr[i] % 2 ==0){
                even++;
            }
        }
    }

    cout << "There are " << even << " double digit even numbers";
    return 0;
}
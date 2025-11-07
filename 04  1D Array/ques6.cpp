// Write a C++ program to check if a number is armstrong in an array of 10 numbers

#include <iostream>
using namespace std;
int main(){

    int arr[10];
    int i; 
    int armstrong = 0;
    cout << "Elements of the array are: ";
    for ( i = 0; i < 10; i++){
        cin >> arr[i];
    }

    for ( i = 0; i < 10; i++){
        int num = arr[i];
        int temp = num;
        int digits = 0;
        while (temp > 0){
            digits++;
            temp /= 10;
        }

        temp = num;
        int sum = 0;
        
        while ( temp > 0){
            int digit = temp % 10;
            
            int power = 1;
            for ( int j = 0; j < digits; j++){
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        if ( sum == num && num != 0){
            armstrong++;
            cout << num << " is a armstrong number" << endl;
        }
    }
    cout << "There are " << armstrong << " armstrong numbers in the array" << endl;
    return 0;
}

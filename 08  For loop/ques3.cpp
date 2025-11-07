// Write a C++ program to get the factorial of 10 numbers using for loop

#include <iostream>
using namespace std;
int main(){

    int num,i,j,factorial = 1;

    cout << "Enter 10 numbers: ";

    for ( i = 1; i <= 10; i++){
        cin >> num;
        factorial = 1;
        

        for ( j = 1; j <= num; j++){
            factorial = factorial*j;
        }
        cout << "factorial is: " << factorial << endl;
    }
    return 0;
}   
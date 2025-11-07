// Write a C++ program to accept 10 numbers in loop and display sum of all numbers

#include <iostream>
using namespace std;
int main(){

    int sum = 0;
    int i = 1,num;

    cout << "Enter 10 numbers: ";

    while(i<=10){
        cin >> num;
        sum += num;
        i++;
    }
    
    cout << "Sum is: " << sum;

    return 0;
}
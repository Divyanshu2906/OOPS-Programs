// Write a C++ program to check for maximum number among 2 numbers

#include <iostream>
using namespace std;
int main(){

    int num1,num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num2 > num1){
        cout << "Number 2 is max";
    }
    else {
        cout << "Number 1 is max";
    }
    return 0;
}
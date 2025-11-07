// Write a C++ program to check for maximum number among 2 numbers

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if ( num1 != num2){
        if ( num1 > num2){
            cout << "num1 is max";
        }
        else{
            cout << "num2 is max";
        }
    }
        else{
            cout << "Both are equal";
        }
        return 0;
}
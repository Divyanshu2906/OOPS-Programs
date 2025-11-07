// Write a C++ program to check for odd and even numbers

#include <iostream>
using namespace std;
int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if ( num % 2 == 0){
        cout << "Number is even";
    }
    else {
        cout << "Number is odd";
    }
    return 0;
}

// Write a C++ program to check for odd and even numbers

#include <iostream>
using namespace std;
int main(){

    int num;

    cout << "Enter remainder: ";
    cin >> num;

    switch(num%2){

    case 0:
        cout << "Number is even";
    break;


    case 1:
        cout << "Number is odd";
    break;

    default:
        cout << "Invalid input";
 }
    return 0;

}
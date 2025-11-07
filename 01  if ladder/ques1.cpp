// Write a C++ program to check if a number is a double digit number or not


#include <iostream>
using namespace std;
int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 10 && num<=99){
        cout << "It is a double digit number";
    }
    else if(num<= -10 && num>=-99){
        cout << "It a double digit negative number";
    }
    else{
        cout << "It is a single digit number";
    }

    return 0;
}
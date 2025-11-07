// Student Details
// Name: Divyanshu Khoiya  
// Registration No: 2428010153  
// Section: C  
// Subject: OOPS in C++  
// Course Code: CCE2120 


// Write a C++ program to check if a number is a double digit number or not

#include <iostream>
using namespace std;
int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num >= 10 && num<=99){
        cout << "It is a double digit number";
    }
    else{
        cout << "It is a single digit number";
    }

    return 0;
}
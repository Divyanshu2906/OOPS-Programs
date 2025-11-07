// Write a C++ program to accept a string from user and copy it to another string

#include <iostream>
#include <string.h>
using namespace std;
int main(){

    string first_name;
    cout <<"Enter you first name: ";
    cin >> first_name;

    string last_name;
    cout << "Enter your last name: ";
    cin >> last_name;

    string full_name = first_name + " " + last_name;
    cout << "Your full name is: " << full_name;

    return 0;
}
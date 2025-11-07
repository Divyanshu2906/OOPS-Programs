// Write a C++ program to check for maximum number among 2 numbers


#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int choice; 

    
    if (a > b)
        choice = 1;
    else if (b > a)
        choice = 2;
    else
        choice = 3;

        
    switch (choice) {
        case 1:
            cout << a << " is greater than " << b << endl;
            break;
        case 2:
            cout << b << " is greater than " << a << endl;
            break;
        case 3:
            cout << "Both numbers are equal." << endl;
            break;
        default:
            cout << "Invalid condition." << endl;
    }

    return 0;
}

// Write a C++ program to check palindrome using do while loop 

#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    original = num;   

    do {
        digit = num % 10;              
        reversed = reversed * 10 + digit; 
        num = num / 10;                
    } while (num > 0);

    if (original == reversed) {
        cout << original << " is a Palindrome.";
    } 
    else {
        cout << original << " Not a Palindrome.";
    }

    return 0;
}

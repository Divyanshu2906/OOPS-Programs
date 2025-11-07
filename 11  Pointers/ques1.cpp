// Write a C++ program to check if a number is palindrome using pointer

#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, remainder;
    int *ptr; 

    cout << "Enter a number: ";
    cin >> num;

    int original = num; 
    ptr = &num;         

    while (*ptr != 0) {
        remainder = (*ptr) % 10;              
        reversed = (reversed * 10) + remainder; 
        *ptr = (*ptr) / 10;                     
    }

    ptr = &reversed;

    cout << "Reversed number: " << *ptr << endl;

    if (original == *ptr)
        cout << "The number is a palindrome." << endl;
    else
        cout << "The number is not a palindrome." << endl;

    return 0;
}

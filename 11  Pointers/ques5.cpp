// Write a C++ program to find the factorial of a number using pointer

#include <iostream>
using namespace std;

int main() {
    int num, i;
    long long fact = 1;
    int *ptr;

    cout << "Enter a number: ";
    cin >> num;

    ptr = &num;

    for (i = 1; i <= *ptr; i++) {
        fact *= i;
    }

    cout << "Factorial of " << *ptr << " is " << fact << endl;

    return 0;
}

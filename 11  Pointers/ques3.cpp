// Write a C++ program to check if a number is prime using pointers

#include <iostream>
using namespace std;

int main() {
    int num, i, flag = 0;
    int *ptr;

    cout << "Enter a number: ";
    cin >> num;

    ptr = &num;

    if (*ptr <= 1) {
        cout << *ptr << " is not a prime number." << endl;
        return 0;
    }

    for (i = 2; i <= *ptr / 2; i++) {
        if (*ptr % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << *ptr << " is a prime number." << endl;
    else
        cout << *ptr << " is not a prime number." << endl;

    return 0;
}

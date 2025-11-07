// Write a C++ program to check if a number is perfect number using pointers

#include <iostream>
using namespace std;

int main() {
    int num, i, sum = 0;
    int *ptr;

    cout << "Enter a number: ";
    cin >> num;

    ptr = &num;

    for (i = 1; i <= *ptr / 2; i++) {
        if (*ptr % i == 0)
            sum += i;
    }

    if (sum == *ptr)
        cout << *ptr << " is a Perfect Number." << endl;
    else
        cout << *ptr << " is not a Perfect Number." << endl;

    return 0;
}

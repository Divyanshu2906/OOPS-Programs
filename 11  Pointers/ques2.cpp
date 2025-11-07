// Write a C++ program to check if a number is armstrong using pointer

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, sum = 0, remainder, digits = 0;
    int *ptr;

    cout << "Enter a number: ";
    cin >> num;

    int original = num;
    ptr = &num;

    int temp = *ptr;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    *ptr = original;

    while (*ptr != 0) {
        remainder = (*ptr) % 10;
        sum += pow(remainder, digits);
        *ptr = (*ptr) / 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;

    return 0;
}

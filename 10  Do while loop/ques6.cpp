// Write a C++ program to check armstrong number using do while loop

#include <iostream>
using namespace std;

int main() {

    int num, temp, digits = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    do {
        digits++;
        temp /= 10;
    } while (temp > 0);

    temp = num;
    do {
        int digit = temp % 10;

        int power = 1;
        int i = 0;
        do {
            power *= digit;
            i++;
        } while (i < digits);

        sum += power;
        temp /= 10;
    } while (temp > 0);

    if (sum == num && num != 0) {
        cout << num << " is an Armstrong" << endl;
    } else {
        cout << num << " is not Armstrong" << endl;
    }

    return 0;
}
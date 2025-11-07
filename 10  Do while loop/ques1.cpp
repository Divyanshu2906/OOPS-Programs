// Write a C++ program to check for positive, negative and zero using do while loop

#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    int positive = 0, negative = 0, zero = 0;

    cout << "Enter 10 numbers: ";

    do {
        cin >> num;

        if (num > 0) {
            positive++;
        }
        else if (num < 0) {
            negative++;
        }
        else {
            zero++;
        }

        i++;
    } while (i <= 10);

    cout << "positive numbers: " << positive << endl;
    cout << "negative numbers: " << negative << endl;
    cout << "zeros: " << zero << endl;

    return 0;
}

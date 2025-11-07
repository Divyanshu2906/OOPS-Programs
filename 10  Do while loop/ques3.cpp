// Write a C++ program to check maximum number among 10 numbers

#include <iostream>
using namespace std;

int main() {
    int num, i = 1, max;

    cout << "Enter 10 numbers: " << endl;

    cin >> num;
    max = num;
    i++;

    do {
        cin >> num;
        if (num > max) {
            max = num;   
        }
        i++;
    } while (i <= 10);

    cout << "The maximum number is: " << max << endl;

    return 0;
}

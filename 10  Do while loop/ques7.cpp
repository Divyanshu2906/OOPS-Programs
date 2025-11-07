// Write a C++ program to check if a number is prime or not using do while loop

#include <iostream>
using namespace std;

int main() {
    int num, i = 2, isPrime = 1; 

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = 0; 
    } else {
        do {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        } while (i <= num / 2);
    }

    if (isPrime == 1) {
        cout << num << " is a Prime number" << endl;
    } else {
        cout << num << " is NOT a Prime number" << endl;
    }
    
    return 0;
}
// Write a C++ program to display all even numbers using do while loop 

#include <iostream>
using namespace std;

int main() {
    int num, i = 1;

    cout << "Enter 10 numbers: ";

    do {
        cin >> num;
        if (num % 2 == 0) {  
            cout << num << " is even";
        }
        i++;
    } while (i <= 10);

    return 0;
}
// Write a C++ program to check minimum number using do while loop

#include <iostream>
using namespace std;

int main() {
    int num, i = 1, min;

    cout << "Enter 10 numbers: " << endl;

    cin >> num;
    min = num;  
    i++;  

    do {
        cin >> num;
        if (num < min) {
            min = num; 
        }
        i++;
    } while (i <= 10);

    cout << "The minimum number is: " << min;

    return 0;
}
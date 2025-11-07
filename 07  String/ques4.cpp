// Write a C++ program take a string from user and count the words

#include <iostream>
#include <string>   
using namespace std;

int main() {

    char str[200];   
    int count = 0;

    cout << "Enter a string: ";
    cin >> str;

    while (str != NULL) {
        count++;                 
    }

    cout << "Number of words: " << count << endl;

    return 0;
}
// Write a C++ program to if a number is palindrome using functions

#include <iostream>
using namespace std;
void palindrome(int x){

    int rev = 0;
    int digits = 0;

    int temp = x;
    while ( temp > 0){
        int digits = temp % 10;
        rev = rev*10 + digits;
        temp /= 10;
    }

    if (x == rev){
        cout << "\n Number is palindrome";
    }
    else{
        cout << "\n Number is not palindrome";
    }
}

int main(){

    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    palindrome(x);
    return 0;
}

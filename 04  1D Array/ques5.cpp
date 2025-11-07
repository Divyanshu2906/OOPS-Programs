// Write a C++ program to check for a palindrome number in an array of 10 numbers

#include <iostream>
using namespace std;
int main(){

    int arr[10];
    int i;
    int pal = 0;

    cout << "Elements in the array are: ";
    for ( i = 0;  i < 10; i++){
        cin >> arr[i];
    }

    for ( i = 0; i < 10; i++){
        int original = arr[i];
        int temp = arr[i];
        int rev = 0;

        while (temp>0){
            int digit = temp % 10;
            rev = rev*10 + digit;
            temp /= 10;
        }

        if ( original == rev){
            pal++;
            cout << original << " is a palindrome" << endl;
        }
    }

    cout << "There are " << pal << " palindrome number in the array";
    return 0;
}
// Write a C++ program to check for armstrong number using function 

#include <iostream>
using namespace std;
void armstrong(int x){

    int temp = x;
    int digits = 0;
    while( temp > 0){
        digits++;
        temp /= 10;
    }

    temp = x;
    int digit = 0;
    int sum = 0;
    while ( temp > 0){
        digit = temp % 10;
        int power = 1;
        for ( int i = 0; i < digits; i++){
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    if (sum == x){
            cout << "\nNumber is armstrong";
        }
        else{
            cout << "\nNumber is not armstrong";
        }
}
int main(){

    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    armstrong(x);
    return 0;
}

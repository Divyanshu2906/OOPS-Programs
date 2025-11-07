// Write a C++ program to check for prime number using function

#include <iostream>
using namespace std;
void prime(int x){

    int isprime = 1;

    for (int  i = 2; i < x; i++){
        if ( x % i == 0){
            isprime = 0;
            break;
        }
    }

    if ( isprime == 1){
        cout << "\n" << x << " is prime number";
    }
    else{
        cout << "\n" << x << " is not a prime number";
    }
}
int main(){

    int x;

    cout << "Enter a number: ";
    cin >> x;

    prime(x);
    return 0;
}
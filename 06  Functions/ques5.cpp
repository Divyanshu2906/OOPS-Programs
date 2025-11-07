// Write a C++ program to get the factorial of a number using function

#include <iostream>
using namespace std;
void factorial(int x){

    int fac = 1;
    for ( int i = 1; i <= x; i++){
        fac *= i;
    }

    cout << "\nFactorial of this number is: " << fac;
}

int main(){

    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    factorial(x);
    return 0;

}

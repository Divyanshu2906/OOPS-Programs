// Write a C++ program to get the power of a number using function

#include <iostream>
using namespace std;
void power(int x){

    int power = 1;
    for (int i = 1; i <= x; i++){
        power *= x;
    }

    cout << "\nPower of x is: " << power;
}
int main(){

    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    power(x);
    return 0;
}
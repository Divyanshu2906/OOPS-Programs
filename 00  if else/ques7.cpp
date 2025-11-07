// Write a C++ program to check for minimum number among 3 numbers

#include <iostream>
using namespace std;
int main(){

    int num1,num2,num3;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    if ( num3 < num1 && num3 < num2){
        cout << "num3 is min";
    }
    else if(num2 < num3 && num2 < num1){
        cout << "num2 is min";
    }
    else if(num1 < num2 && num1 < num3){
        cout << "num1 is min";
    }
    return 0;
}

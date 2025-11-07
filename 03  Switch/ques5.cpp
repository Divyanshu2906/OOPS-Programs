// Write a C++ program to check for maximum number among 3 numbers

#include <iostream>
using namespace std;
int main(){

    int num1,num2,num3,max;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    if(num1>num2 && num1>num3){
        max = 1;
    }
    else if(num2>num1 && num2>num3){
        max = 2;
    }
    else{
        max = 3;
    }

    switch(max){

        case 1:
            cout << "Num1 is max";
            break;

        case 2:
            cout << "num2 is max";
            break;

        case 3:
            cout << "num3 is max";
            break;

        default: 
            cout << "invalid input";

    }

    return 0;
}
// Write a C++ program to check for maximum number among 3 numbers

#include <iostream>
using namespace std;
int main(){

    int num1,num2,num3;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1>num2){
        if(num1>num3){
            cout << "num1 is max";
        }
        else{
            cout << "num3 is max";
        }
    }
    else{
        if(num2>num3){
            cout << "Num2 is max";
        }
        else{
            cout << "num3 is max";
        }
    }

    return 0;
}

// Write a C++ program to check for the maximum number among 4 numbers

#include <iostream>
using namespace std;
int main(){

    int num1,num2,num3,num4;

    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    if(num1 > num2 && num1 >> num3 && num1 > num4){
        cout << "Num1 is max";
    }
    else if(num2 > num1 && num2 >> num3 && num2 > num4 ){
        cout << "num2 is max";
    }
    else if(num3 > num1 && num3 >> num2 && num3 > num4){
        cout << "num3 is max";
    }
    else{
        cout << "num4 is max";
    }
    return 0;
}
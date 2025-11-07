// Write a C++ program to check for minimum number among 3 numbers

#include <iostream>
using namespace std;
int main(){

    int num1,num2,num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if(num1<num2){
        if(num1<num3){
            cout << "num1 is min";
        } else{
            cout << "num3 is min";
        }
    }
        else{
            if(num2<num3){
                cout << "num2 is min";
            }
            else{
                cout << "num3 is min";
            }
        }

    return 0;
}

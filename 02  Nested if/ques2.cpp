// Write a C++ program to check if a number is a 3 digit number or not also display the sum 


#include <iostream>
using namespace std;
int main(){

    int num,sum;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 100 || num <= -100){
        if (num <= 999 && num >= -999){
            sum = (num/100) + ((num/10) % 10) + (num%10);
            cout << "It is a 3 digit number" << endl;
            cout << "Sum is: " << sum;
        }
        else{
            cout << "It is not a 3 digit number";
        }
    }

    else{
        cout << "It is not a 3 digit number";
    }
    return 0;
}

// Write a C++ program to check odd and even numbers using functions 

#include <iostream>
using namespace std;
void oddoreven (int x){

    if ( x % 2 == 0){
        cout <<"\nNumber is even";
    }
    else{
        cout << "\n Number is odd";
    }
}
int main(){

    int x;
    
    cout << "Enter the value of x: ";
    cin >> x;

    oddoreven();
    return 0;
}
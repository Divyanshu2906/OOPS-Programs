// Write a C++ program to accept 10 numbers and display the first even numbers using for loop 

#include <iostream>
using namespace std;
int main(){

    int i,num;

    cout << "Enter 10 numbers: ";
    

    for ( i = 1; i<=10; i++){
        cin >> num;
        if(num % 2 == 0){
            cout << num;
        }
    }
    
    return 0;
}
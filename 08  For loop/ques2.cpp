// Write a C++ program to print the table of 10 numbers using for loop

#include <iostream>
using namespace std;
int main(){

    int num,i,j;

    cout << "Enter 10 numbers: ";

    for(i = 1; i <= 10; i++){
        cin >> num;
    

        cout << "\nTable of " << num << endl;

        for (j = 1; j <= 10; j++){
            cout << num << " X " << j << " = " << j*num << endl; 
        }
    }
    return 0;
}
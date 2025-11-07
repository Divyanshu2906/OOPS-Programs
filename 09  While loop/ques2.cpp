// Write a C++ program to print the series of odd numbers which include 1 to 20

#include <iostream>
using namespace std;
int main(){

    int num = 1;

    while(num<=20){
        num++;
        if(num % 2 != 0){
            cout << num;
        }
    }
    return 0;
}

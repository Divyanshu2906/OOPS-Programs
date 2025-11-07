// Write a C++ program to check for maximum number using function

#include <iostream>
using namespace std;
void max(int x, int y){

    if (x>y){
        cout << "\n" << x << " is maximum";
    }
    else{
        cout << "\n" << y << " is maximum";
    }
}
int main(){

    int x,y;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    max(x,y);

    return 0;
}
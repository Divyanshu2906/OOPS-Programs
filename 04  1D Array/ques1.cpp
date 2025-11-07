//Write a C++ program to print an array

#include <iostream>
using namespace std;
int main(){

    int arr[5] = {0,1,2,3,4};

    cout << "Elements in the array are: ";
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
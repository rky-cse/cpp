#include<bits/stdc++.h>
using namespace std;

int add(int a, int b){
    return a+b;
}


int main(){

    int (*fptr)(int, int); // function pointer declaration
    fptr = add; // assigning function address to pointer
    cout << "Sum: " << fptr(5, 10) << endl; // calling function using pointer
    cout << "Sum: " << add(5, 10) << endl; // calling function directly
    cout << "Sum: " << (*fptr)(5, 10) << endl; // calling function using pointer with dereference



return 0;}
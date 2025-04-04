#include <iostream>
using namespace std;

int main() {
    int value = 100;
    int *const ptr = &value; // Constant pointer

    *ptr = 200; // OK: can modify the value
    cout << "Modified Value: " << *ptr << endl;

    // int anotherValue = 300;
    // ptr = &anotherValue; // Error: cannot change the pointer itself
    return 0;
}

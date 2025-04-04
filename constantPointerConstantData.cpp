#include <iostream>
using namespace std;

int main() {
    int value = 100;
    const int *const ptr = &value; // Constant pointer to constant data

    // *ptr = 200; // Error: cannot modify data
    // ptr = nullptr; // Error: cannot change the pointer
    cout << "Value: " << *ptr << endl;
    return 0;
}

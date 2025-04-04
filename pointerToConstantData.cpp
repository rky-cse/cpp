#include <iostream>
using namespace std;

int main() {
    int value = 100;
    const int *ptr = &value; // Pointer to constant data

    // *ptr = 200; // Error: cannot modify data through ptr
    cout << "Value: " << *ptr << endl;

    int anotherValue = 300;
    ptr = &anotherValue; // OK: pointer can point to another integer
    cout << "New Value: " << *ptr << endl;
    return 0;
}

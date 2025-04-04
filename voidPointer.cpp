#include <iostream>
using namespace std;

int main() {
    int a = 42;
    void *vptr = &a;  // vptr can hold the address of any type

    // To access the value, cast vptr back to the appropriate type:
    int *intPtr = static_cast<int*>(vptr);
    cout << "Value of a: " << *intPtr << endl;  // Outputs 42

    return 0;
}

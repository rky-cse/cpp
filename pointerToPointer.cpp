#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;      // Pointer to integer a
    int **pp = &p;    // Pointer to pointer p

    cout << "Value of a: " << a << endl;      // Direct access to a
    cout << "Value using *p: " << *p << endl;   // Dereference p
    cout << "Value using **pp: " << **pp << endl; // Double dereference pp

    return 0;
}

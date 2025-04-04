#include <iostream>
#include <cstring>  // For memcpy

using namespace std;

void genericSwap(void *a, void *b, size_t size) {
    // Create a temporary buffer to hold the data
    char *temp = new char[size];

    // Copy data from a to temp, then b to a, and finally temp to b
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);

    delete[] temp;
}

int main() {
    int x = 100, y = 200;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    genericSwap(&x, &y, sizeof(int));
    cout << "After swap: x = " << x << ", y = " << y << endl;

    double d1 = 3.14, d2 = 2.718;
    cout << "\nBefore swap: d1 = " << d1 << ", d2 = " << d2 << endl;
    genericSwap(&d1, &d2, sizeof(double));
    cout << "After swap: d1 = " << d1 << ", d2 = " << d2 << endl;

    return 0;
}

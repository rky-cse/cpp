#include <iostream>
#include <memory> // Required for smart pointers

using namespace std;

int main() {
    // Create a unique_ptr to an integer
    unique_ptr<int> uptr(new int(42));

    cout << "Value pointed to by unique_ptr: " << *uptr << endl;

    // Transfer ownership to another unique_ptr
    unique_ptr<int> uptr2 = std::move(uptr);

    if (!uptr) {
        cout << "uptr is now empty after move." << endl;
    }

    cout << "Value pointed to by uptr2: " << *uptr2 << endl;
    return 0;
}

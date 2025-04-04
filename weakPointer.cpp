#include <iostream>
#include <memory>

using namespace std;

int main() {
    shared_ptr<int> sptr = make_shared<int>(200);
    weak_ptr<int> wptr = sptr; // Create weak_ptr from shared_ptr

    cout << "Shared pointer reference count: " << sptr.use_count() << endl;

    if (auto temp = wptr.lock()) { // Convert weak_ptr to shared_ptr safely
        cout << "Value accessed through weak_ptr: " << *temp << endl;
    } else {
        cout << "The object no longer exists." << endl;
    }

    sptr.reset(); // Destroy the object

    if (wptr.expired()) {
        cout << "After reset, the weak_ptr is expired." << endl;
    }
    return 0;
}

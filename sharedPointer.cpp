#include <iostream>
#include <memory>

using namespace std;

int main() {
    // Create a shared_ptr to an integer
    shared_ptr<int> sptr1 = make_shared<int>(100);

    cout << "Value pointed to by sptr1: " << *sptr1 << endl;
    cout << "Reference count: " << sptr1.use_count() << endl;

    {
        shared_ptr<int> sptr2 = sptr1; // Share ownership
        cout << "After copying, reference count: " << sptr1.use_count() << endl;
    } // sptr2 goes out of scope

    cout << "After sptr2 is out of scope, reference count: " << sptr1.use_count() << endl;
    return 0;
}

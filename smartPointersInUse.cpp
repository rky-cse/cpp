/*

Problem Statement:
Create a program that manages a collection of dynamically allocated objects using std::shared_ptr. Implement a function to add new objects to the collection and another function to display the contents.

Hints:
Use a container like std::vector to hold shared_ptr objects.

Ensure that objects are automatically deallocated when they are no longer needed.

Practice creating, copying, and accessing the elements through shared_ptr.



*/

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Item {
public:
    int value;
    Item(int val) : value(val) { }
    void display() { cout << "Item value: " << value << endl; }
};

void addItem(vector<shared_ptr<Item>> &items, int value) {
    items.push_back(make_shared<Item>(value));
}

void displayItems(const vector<shared_ptr<Item>> &items) {
    for (const auto &item : items) {
        item->display();
    }
}

int main() {
    vector<shared_ptr<Item>> items;
    
    addItem(items, 10);
    addItem(items, 20);
    addItem(items, 30);

    cout << "Displaying items:" << endl;
    displayItems(items);

    return 0;
}

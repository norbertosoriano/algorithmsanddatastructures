#include <iostream>
#include <memory>
#include "LinkedList.hpp"

// template <class T>
// class LinkedList;

int main() {
    // std::unique_ptr<LinkedList<int>> list(new LinkedList<int>);
    LinkedList<int> *list = new LinkedList<int>;

    list->addFirst(3);
    list->addFirst(5);
    list->addFirst(7);
    list->print();
}
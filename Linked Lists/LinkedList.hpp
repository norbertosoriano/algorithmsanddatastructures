#include <iostream>
#include <memory>
#include "Node.hpp"

using namespace std;

// template <class T>
// class Node;

template <class T>
class LinkedList {
    std::shared_ptr<Node<T>> m_head;
    std::shared_ptr<Node<T>> m_tail;

    public:
        void addFirst(T value) {
            std::shared_ptr<Node<T>> tmp(new Node<T>); 
            tmp->setValue(value);
            tmp->setNext(m_head);

            m_head = tmp;
        }

        void print() {
            std::shared_ptr<Node<T>> tmp = m_head;

            while(tmp) {
                cout << tmp->getValue() << endl;
                tmp = tmp->getNext();
            }
        }
};
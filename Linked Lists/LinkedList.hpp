#include <iostream>
#include <memory>
#include "Node.hpp"

using namespace std;

// template <class T>
// class LinkedListNode;

template <class T>
class LinkedList {
    // std::unique_ptr<LinkedListNode<T>> m_head;
    // std::unique_ptr<LinkedListNode<T>> m_tail;
    Node<T> *m_head;
    Node<T> *m_tail;

    public:
        // void addFirst(T value) {
        void addFirst(T value) {
            // std::unique_ptr<LinkedListNode<T>> tmp(new LinkedListNode<T>); 

            Node<T> *tmp = new Node<T>;
            tmp->setValue(value);
            tmp->setNext(m_head);

            m_head = tmp;
        }

        void print() {
            // std::unique_ptr<LinkedListNode<T>> tmp = m_head;
            Node<T> *tmp = m_head;

            while(tmp) {
                cout << tmp->getValue() << endl;
                tmp = tmp->getNext();
            }
        }
};
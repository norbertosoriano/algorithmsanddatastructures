#include <iostream>

template <class T>
class Node {
    T m_value;
    Node *m_next;

    public:
        T getValue() const {
            return this->m_value;
        }

        void setValue(T value) {
            this->m_value = value;
        }

        Node *getNext() const {
            return this->m_next;
        }

        void setNext(Node *next) {
            this->m_next = next;
        }
};
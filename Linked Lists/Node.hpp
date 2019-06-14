#include <iostream>
#include <memory>

template <class T>
class Node {
    T m_value;
    std::shared_ptr<Node<T>> m_next;

    public:
        T getValue() const {
            return this->m_value;
        }

        void setValue(T value) {
            this->m_value = value;
        }

        std::shared_ptr<Node<T>> getNext() const {
            return this->m_next;
        }

        void setNext(std::shared_ptr<Node<T>> next) {
            this->m_next = next;
        }
};
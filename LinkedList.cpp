#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    while (!isEmpty()) {
        remove();
    }
}

void LinkedList::add(int value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = head;
    head = newNode;
}

int LinkedList::remove() {
    if (isEmpty()) {
        std::cerr << "Error: The list is empty, cannot remove." << std::endl;
        return -1;
    }
    else {
        Node* temp = head;
        int value = head->value;
        head = head->next;
        delete temp;
        return value;
    }
}

bool LinkedList::isEmpty() const {
    return head == nullptr;
}

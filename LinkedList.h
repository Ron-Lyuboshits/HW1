#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int value;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    ~LinkedList();

    void add(int value);
    int remove();

    bool isEmpty() const;
};

#endif /* LINKEDLIST_H */


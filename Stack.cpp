#include "Stack.h"

void push(Stack* s, unsigned int element) {
    s->list.add(element);
}

int pop(Stack* s) {
    return s->list.remove();
}

void initStack(Stack* s) {
}

void cleanStack(Stack* s) {
    while (!isEmpty(s)) {
        pop(s);
    }
}

bool isEmpty(Stack* s) {
    return s->list.isEmpty();
}
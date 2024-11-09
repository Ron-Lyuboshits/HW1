#include "queue.h"


void initQueue(Queue* q, unsigned int size) {
    q->size = size;
    q->array = new unsigned int[size];
    q->front = 0;
    q->rear = 0;
    q->count = 0;
}


void cleanQueue(Queue* q) {
    delete[] q->array;
    q->array = nullptr;
    q->front = 0;
    q->rear = 0;
    q->count = 0;
}


void enqueue(Queue* q, unsigned int newValue) {
    if (isFull(q)) {
        return;
    }

    q->array[q->rear] = newValue;
    q->rear = (q->rear + 1) % q->size;
    q->count++;

}


int dequeue(Queue* q) {
    if (isEmpty(q)) {
        return -1;
    }
    
    unsigned int frontElement = q->array[q->front];
    q->front = (q->front + 1) % q->size;
    q->count--;
    return frontElement;

}


bool isEmpty(Queue* q) {
    return q->count == 0;
}


bool isFull(Queue* q) {
    return q->count == q->size;
}

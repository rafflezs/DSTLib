//Simple Queue

#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    Node* front;
    Node* rear;
}Queue;

typedef struct node
{
    Node* next;
    int value;
    int priority;
}Node;

Node* begin();

Node* end();

int queue(Queue* q, int value);

int dequeue(Queue* q);

void peek(Queue* q);

#endif //!_QUEUE_H
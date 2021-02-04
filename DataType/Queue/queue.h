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
}Node;

Node* begin();

Node* end();

int queue(Queue* q, int value);

int dequeue(Queue* q);

int peek(Queue* q);

void display(Queue* q);

#endif //!_QUEUE_H
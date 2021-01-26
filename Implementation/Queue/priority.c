#include "../DataType/Queue/priority.h"

struct queue
{
    Node* front;
    Node* rear;
};

struct node
{
    Node* next;
    int value;
    int priority;
};

Node* begin(Queue* q){
    return q->front;
}

Node* end(Queue* q){
    return q->rear;
}

int queue(Queue* q, int value){
    
}

int dequeue(Queue* q){

}

void peek(Queue* q){

}
#include "../DataType/Queue/queue.h"

Node* begin(Queue* q){
    return q->front;
}

Node* end(Queue* q){
    return q->rear;
}

int queue(Queue* q, int value){

    if(q == NULL){
        return 0;
    }

    Node* temp = (Node*) malloc( sizeof(Node) );

    if(temp == NULL){
        return 0;
    }

    temp->next = NULL;
    temp->value = value;

    if(q->front == NULL){
        q->front = temp;
        q->rear = temp;
    }else{
        q->rear->next = temp;
        q->rear = temp;
    }

    return 1;

}

int dequeue(Queue* q){

    if(q == NULL){
        return 0;
    }

    Node* temp = (Node*) malloc( sizeof(Node) );

    if(temp == NULL){
        return 0;
    }

    if(q->front == NULL){
        return 0;
    }else{
        temp = q->front;
        q->front = q->front->next;
        free(q);
    }

    return 1;

}

int peek(Queue* q){

    return q->front;

}

void display(Queue* q){

    if(q == NULL || q->front == NULL){
        printf("Queue is empty.\n");
    }

/*     for(q){

    }
 */
}
#include "/home/rafflezs/Documentos/DSTLib/DataType/circular.h"

struct list{
    Node* head; //In circular list, front and last are the same
    Node* last;
};

struct node{
    int value;
    Node* next;
};

List* create_list(){

    List* list = (List*) malloc( sizeof(List) );

    list->head = NULL;

    return list;

}

Node* begin(List* list){

    return list->head;

}

Node* end(List* list){

    return list->last;

}

void show_list(List* list){

    if(list == NULL){
        return;
    }

    Node* it = list->head;

    printf("Node - [Value] | ");

    for(; it->next != list->head; it = it->next){
        printf("%p - [%i] | ", it, it->value);
    }

    printf("\n");

}

int insert_front(List* list, int value){

    if(list == NULL){
        return 0;
    }

    Node* temp = (Node*) malloc( sizeof( Node ) );

    if(temp == NULL){
        return 0;
    }

    temp->value = value;
    temp->next = NULL;

    if(list->head == NULL){
        list->head = list->last = temp;
        list->last->next = list->head;
    }else{
        temp->next = list->head;
        list->last = temp;
    }

    return 1;

}

int remove_front(List* list){

    if(list == NULL){
        return 0;
    }

    if(list->head == NULL){
        return 0;
    }else{
        Node* temp = (Node*) malloc( sizeof( Node ) );
        temp = list->head;
        list->last->next = list->head = list->head->next;
        free(temp);
    }

    return 1;

}

int insert_back(List* list, int value){

    if(list == NULL){
        return 0;
    }

    Node* temp = (Node*) malloc( sizeof( Node ) );

    if(temp == NULL){
        return 0;
    }

    temp->value = value;
    temp->next = NULL;

    if(list->head == NULL){
        list->head = list->last = temp;
        list->last->next = list->head;
    }else{
        temp->next = list->head;
        list->last->next = temp;
        list->last = temp;
    }

    return 1;

}

int remove_back(List* list){

if(list == NULL){
        return 0;
    }

    if(list->head == NULL){
        return 0;
    }else{
        Node* it = list->head;
        for(; it != list->last; it = it->next);
        Node* temp = it->next;
        it->next = list->head;

        list->last = it;

        free(temp);
    }

    return 1;

}

void printa(Node* n){

    printf("Current Node Address %p - [Value]: %i\n", n ,n->value);
    printf("Next Node Address %p - [Value]: %i\n", n->next , n->next->value);

}
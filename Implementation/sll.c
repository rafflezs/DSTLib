#include "../DataType/sll.h"

typedef struct node{
    int value;
    struct node* next;
}Node;

struct list{
    Node* header;
};

List* create_list(){

    List* list = (List*) malloc( sizeof(List) );

    list->header = NULL;

    return list;

}

void show_list(List* list){

    Node* temp = list->header;
    int cont = 1;

    if(list->header == NULL){
        printf("Empty list\n");
        return;
    }

    do
    {

        printf("Node: %i - ", cont);
        printf("Value: [%i] | ", temp->value);

        cont++;
        temp = temp->next;
    
    } while ( temp != NULL );

    printf("\n");

}

int push_front(List* list, int value){

    if(list == NULL){
        return 0;
    }

    Node* temp = (Node*) malloc( sizeof(Node));

    if(temp == NULL){
        return 0;
    }

    temp->value = value;
    temp->next = list->header;
    list->header = temp;

    return 1;

}

int pop_front(List* list){

    if(list->header == NULL){

        return 0;

    }else{

        Node* temp = (Node*) malloc( sizeof(Node));

        temp = list->header;
        list->header = list->header->next;

        free(temp);

    }

    return 1;

}

int push_back(List* list, int value){

    if(list == NULL){
        return 0;
    }

    Node* temp = (Node*) malloc( sizeof(Node));

    if(temp == NULL){
        return 0;
    }

    if(list->header == NULL){

        temp->value = value;
        temp->next = NULL;
        list->header = temp;

    }else{
        
        Node* it = (Node*) malloc( sizeof(Node));

        for(it = list->header; it->next != NULL; it = it->next);

        temp->value = value;
        temp->next = NULL;
        it->next = temp;
    }
    
    return 1;
}

int pop_back(List* list){

    if(list->header == NULL){

        return 0;

    }else{

        Node* temp = (Node*) malloc( sizeof(Node));
        Node* it = (Node*) malloc( sizeof(Node));

        for(it = list->header; it->next != NULL; it = it->next);

        temp = it;
        it->next = NULL;
        free(temp);

    }

    return 1;

}

List* find(List* list, int value){

    if(list == NULL){
        return NULL;
    }

    if(list->header == NULL){
        return NULL;
    }

    List* foundValues = (List*) malloc (sizeof (List));
    Node* temp = (Node*) malloc( sizeof(Node));

    temp = foundValues->header;

    for(it = list->header; it->next != NULL; it = it->next){
        if(it->value == value){
            temp = it;
            temp = temp->next;
        }
    }

    return foundValues;

}

int empty(List* list){

    if(list->header == NULL){
        return 1;
    }

    return 0;
}

int size(List* list){

    int size = 0;

    if(list == NULL){
        return size;
    }

    if(list->header == NULL){
        return size;
    }

    Node* temp = (Node*) malloc( sizeof(Node) );
    for(temp = list->header; temp->next != NULL; temp = temp->next, size++);

    return size;

}

int erase(List* list){

}

int clear(List* list){

}
#include "../DataType/sll.h"

struct node{
    int value;
    struct node* next;
};

struct list{
    Node* front;
    Node* last;
};

List* create_list(){

    List* list = (List*) malloc( sizeof(List) );

    list->front = NULL;

    return list;

}

Node* begin(List* l1){

    return l1->front;

};

Node* end(List* l1){

    return l1->last;

};

void show_list(List* list){

    Node* temp = list->front;
    int cont = 1;

    if(list->front == NULL){
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

    temp->next = NULL;
    temp->value = value;

    if(list->front == NULL){
        list->front = temp;
        list->last = temp;
    }else{
        temp->next = list->front;
        list->front = temp;
    }


    return 1;

}

int pop_front(List* list){

    if(list->front == NULL){

        return 0;

    }else{

        Node* temp = (Node*) malloc( sizeof(Node));

        temp = list->front;
        list->front = list->front->next;

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

    temp->value = value;
    temp->next = NULL;

    if(list->front == NULL){

        list->front = temp;
        list->last = temp;

    }else{
        
        Node* it = (Node*) malloc( sizeof(Node));

        for(it = list->front; it->next != NULL; it = it->next);
        it->next = temp;
        list->last = temp;
    }
    
    return 1;
}

int pop_back(List* list){

    if(list->front == NULL){

        return 0;

    }else{

        Node* temp = (Node*) malloc( sizeof(Node));
        Node* it = (Node*) malloc( sizeof(Node));

        for(it = list->front; it->next->next != NULL; it = it->next);

        temp = it->next;
        it->next = NULL;
        list->last = it;
        free(temp);

    }

    return 1;

}

/* List* find(List* list, int value){

    if(list == NULL){
        return NULL;
    }

    if(list->front == NULL){
        return NULL;
    }

    List* foundValues = (List*) malloc (sizeof (List));
    Node* temp = (Node*) malloc( sizeof(Node));

    for(Node* it = list->front; it->next != NULL; it = it->next){
        if(it->value == value){
            temp = it;
            temp = temp->next;
        }
    }

    foundValues->front = temp;

    return foundValues;

} */

int empty(List* list){

    if(list->front == NULL){
        return 1;
    }

    return 0;
}

int size(List* list){

    int size = 0;

    if(list == NULL){
        return size;
    }

    if(list->front == NULL){
        return size;
    }

    Node* temp = (Node*) malloc( sizeof(Node) );
    for(temp = list->front; temp->next != NULL; temp = temp->next, size++);

    return size;

}

int erase_node(List* list, Node* n){

    if(list == NULL){
        return 0;
    }

    if(list->front == NULL){
        return 0;
    }

    Node* it = (Node*) malloc( sizeof(Node) );

    for(it = list->front; it->next != NULL; it = it->next){
        if(it->next == n){
            break;
        }
    }    
    
    Node* temp = (Node*) malloc( sizeof(Node) );

    temp = it->next;
    it->next = temp->next;

    free(temp);

    return 1;

}

int erase_index(List* list, int index){

    if(list == NULL){
        return 0;
    }

    if(list->front == NULL){
        return 0;
    }

    Node* it = (Node*) malloc( sizeof(Node) );
    it = list->front;
    int i = 1;

    if(index == 1){

        it = list->front;
        list->front = list->front->next;        
        free(it);
    
        return 1;
    }

    while(i < index && it->next != NULL){
        it = it->next;
        i++;
    }
    
    Node* temp = (Node*) malloc( sizeof(Node) );

    temp = it->next;
    it->next = temp->next;

    free(temp);
    
    return 1;

}

int clear(List* list){

    if(list == NULL){
        return 0;
    }

    if(list->front == NULL){
        return 0;
    }

    Node* temp = (Node*) malloc( sizeof(Node) );

    do
    {
        temp = list->front;
        list->front = list->front->next;
        free(temp);
    } while (list->front != NULL);

    return 1;

} 

Node* advance(List* list, int n){

    if(list == NULL){
        return NULL;
    }

    if(list->front == NULL){
        return NULL;
    }

    Node* it = (Node*) malloc( sizeof(Node) );

    it = list->front;

    for(int i = 0; i < n && it->next != NULL; i++, it = it->next);

    return it;

}

List* concatenate(List* l1, List* l2){

    if(l1 == NULL || l2 == NULL){
        return NULL;
    }

    List* concatList = (List*) malloc( sizeof(List) );

    if(concatList == NULL){
        return NULL;
    }

    if(l1->front == NULL){
        concatList = l2;
        return concatList;
    }
    if(l2->front == NULL){
        concatList = l1;
        return concatList;
    }

    concatList->front = l1->front;

    Node* lastNode = (Node*) malloc( sizeof(Node) );
    
    if(lastNode == NULL){
        return NULL;
    }

    lastNode = concatList->front;

    for(; lastNode->next != NULL; lastNode = lastNode->next);

    lastNode->next = l2->front;

    return concatList;

}

void printa(Node* n){

    printf("[Value]: %i\n", n->value);

}
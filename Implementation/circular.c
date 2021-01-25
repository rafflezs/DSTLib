#include "/home/rafflezs/Documentos/DSTLib/DataType/circular.h"

struct list{
    Node* head; //In circular list, head and last are the same
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

int push_head(List* list, int value){

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

int remove_head(List* list){

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

int push_back(List* list, int value){

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

int get(List* list, int value){

    if(list == NULL){
        return 0;
    }

    if(list->head == NULL){
        return 0;
    }

    int cont = 1;
    for(Node* it = list->head; it != list->last; it = it->next, cont++){
        if(it->value == value){
            return cont;
        }
    }

    return 0;

}

int empty(List* list){

    if(list->head == NULL){
        return 1;
    }

    return 0;
}

int size(List* list){

    int size = 0;

    if(list == NULL){
        return size;
    }

    if(list->head == NULL){
        return size;
    }

    Node* temp = (Node*) malloc( sizeof(Node) );
    for(temp = list->head; temp->next != list->last; temp = temp->next, size++);

    return size;

}

int remove_value(List* list, int value){

    if(list == NULL){
        return 0;
    }

    if(list->head == NULL){
        return 0;
    }

    Node* it = list->head;

    for(; it != list->last; it = it->next){
        if(it->next->value == value){
            Node* temp = it->next;
            it->next = temp->next;
            free(temp);

            return 1;
        }
    }
    
    return 0;

}

int remove_at(List* list, int index){

    if(list == NULL){
        return 0;
    }

    if(list->head == NULL){
        return 0;
    }

    Node* it = list->head;
    int cont = 1;

    if(index == 1){

        remove_head(list);
        return 1;
    
    }else if(index == size(list)){
        remove_back(list);
        return 1;
    }else{
        for(; it != list->last; it = it->next, cont++){
            if(cont + 1 == index){
    
                Node* temp = it->next;
                it->next = temp->next;
                free(temp);
    
                return 1;

            }
        }
    }
    
    return 0;

}

int clear(List* list){

    if(list == NULL){
        return 0;
    }

    if(list->head == NULL){
        return 0;
    }

    Node* temp = (Node*) malloc( sizeof(Node) );

    do
    {
        temp = list->head;
        list->head = list->head->next;
        free(temp);
    } while (list->head != NULL);

    return 1;

} 

Node* advance(List* list, int n){

    if(list == NULL){
        return NULL;
    }

    if(list->head == NULL){
        return NULL;
    }

    Node* it =  list->head;

    for(; n > 0 && it->next != list->last; n--, it = it->next);

    return it;

}

int replace(List *list, int value, int rep){

    if(list == NULL){
        return 0;
    }

    if(list->head == NULL){
        return 0;
    }

    for(Node* it = list->head; it != NULL; it = it->next){
        if(it->value == value){
            it->value = rep;
            break;
        }
    }

    return 1;

}

int replace_all(List *list, int value, int rep){

    if(list == NULL){
        return 0;
    }

    if(list->head == NULL){
        return 0;
    }

    for(Node* it = list->head; it != NULL; it = it->next){
        if(it->value == value){
            it->value = rep;
        }
    }

    return 1;

}
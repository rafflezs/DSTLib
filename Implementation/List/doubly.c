#include "../DataType/List/doubly.h"

struct node{
    int value;
    struct node* next;
    struct node* prev;
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

//New model - d&t
void show_list(List* list){

    Node* it = list->front;

    if(list->front == NULL){
        printf("Empty list\n");
        return;
    }

    printf("Node - [Value] | ");

    for(; it != NULL; it = it->next){
        printf("%p - [%i] | ", it, it->value);
    }

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

    temp->prev = NULL;
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

int remove_front(List* list){

    if(list->front == NULL){

        return 0;

    }else{

        Node* temp = (Node*) malloc( sizeof(Node));

        temp = list->front;
        list->front = list->front->next;
        list->front->prev = NULL;

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
    temp->prev = NULL;

    if(list->front == NULL){

        list->front = temp;
        list->last = temp;

    }else{
        
        Node* it = (Node*) malloc( sizeof(Node));

        for(it = list->front; it->next != NULL; it = it->next);
        it->next = temp;
        temp->prev = it;
    }
    
    return 1;
}

int remove_back(List* list){

    if(list->front == NULL){

        return 0;

    }else{

        Node* temp = (Node*) malloc( sizeof(Node));
        Node* it = (Node*) malloc( sizeof(Node));

        for(it = list->front; it->next->next != NULL; it = it->next);

        temp = it->next;
        temp->next = NULL;
        temp->prev = it;
        list->last = it;
        free(temp);

    }

    return 1;

}

int get(List* list, int value){

    if(list == NULL){
        return 0;
    }

    if(list->front == NULL){
        return 0;
    }

    int cont = 1;
    for(Node* it = list->front; it != NULL; it = it->next, cont++){
        if(it->value == value){
            return cont;
        }
    }

    return 0;

}

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

int remove_value(List* list, int value){

    if(list == NULL){
        return 0;
    }

    if(list->front == NULL){
        return 0;
    }

    Node* it = list->front;

    for(; it != NULL; it = it->next){
        if(it->next->value == value){
            Node* temp = it->next;
            it->next = temp->next;
            it->next->prev = it;
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

    if(list->front == NULL){
        return 0;
    }

    Node* it = list->front;
    int cont = 1;

    if(index == 1){

        remove_front(list);
        return 1;
    
    }else{
        for(; it != NULL; it = it->next, cont++){
            if(cont + 1 == index){
    
                Node* temp = it->next;
                it->next = temp->next;
                it->next->prev = it;
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

    Node* it =  list->front;

    for(; n > 0 && it->next != NULL; n--, it = it->next);

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

int replace(List *list, int value, int rep){

    if(list == NULL){
        return 0;
    }

    if(list->front == NULL){
        return 0;
    }

    for(Node* it = list->front; it != NULL; it = it->next){
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

    if(list->front == NULL){
        return 0;
    }

    for(Node* it = list->front; it != NULL; it = it->next){
        if(it->value == value){
            it->value = rep;
        }
    }

    return 1;

}

int insert(List* list, int pos, int value, int n){

    if(list == NULL){
        return 0;
    }

    if(list->front == NULL || pos == 1){

        while(n > 0){
            push_back(list, value);
            n--;
        }

    }else if(pos == size(list)){

        while(n > 0){
            push_front(list, value);
            n--;
        }
    
    }else{

        Node* temp = advance(list, pos-1);
        List* l2 = create_list();

        while(n > 0){
            push_back(l2, value);
            n--;
        }

        temp->next->prev = l2->front;
        l2->front->next = temp;
        temp->next = l2->front;


    }

    return 1;

}

int swap(List* list, int v1, int v2){

    if(list == NULL){
        return 0;
    }
    if(list->front == NULL){
        return 0;
    }

    Node* n1;
    Node* n2;

    for(Node* it = list->front; it != NULL; it = it->next){

        if(it->value == v1){
            n1 = it;
        }
        if(it->value == v2){
            n2 = it;
        }

    }

    n1->value = v2;
    n2->value = v1;

    return 1;

}

void printa(Node* n){

    printf("[Previous node value]: %i\n", n->prev->value);

    printf("[Current node value]: %i\n", n->value);

    printf("[Next node value]: %i\n", n->next->value);

}
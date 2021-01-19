#include "DataType/doubly.h"
#include "DataType/simply.h"

int main(){

    List* a = create_list();

    insert_back(a, 33);
    insert_back(a, 2);
    insert_back(a, 0);
    insert_front(a, 3);
    insert_back(a, 8);
    insert_front(a, 6);

    show_list(a);

    Node* b = advance(a, 3);
    
    show_list(a);

    remove_back(a);

    printa(b);

    return 0;

}
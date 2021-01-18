#include "DataType/sll.h"

int main(){

    List* l1 = create_list();
    List* l2 = create_list();

    push_back(l1, 1);
    push_front(l1, 9);
    push_back(l1, 10);
    push_back(l1, 88);
    
    push_back(l2, 8);
    push_front(l2, 102);
    push_back(l2, 1);
    push_back(l2, 666);
    
    List* l3 = concatenate(l2,l2);

    show_list(l3);
    printa(begin(l3));
    printa(end(l3));

    return 0;

}
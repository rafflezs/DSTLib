#include "DataType/sll.h"

int main(){

    List* l1 = create_list();

    push_back(l1, 1);
    push_back(l1, 1);
    push_back(l1, 12);
    push_back(l1, 144);
    push_back(l1, 44);

    List* l2 = find(l1, 1);

    show_list(l1);
    show_list(l2);

    return 0;

}
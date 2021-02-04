#include "/home/rafflezs/Documentos/DSTLib/DataType/Tree/binary.h"
//#include "/home/rafflezs/Documentos/DSTLib/DataType/List/simply.h"

int main(){

    struct node* r = create_tree();

/*     List* a = create_list();

    push_back(a, 10);
    push_back(a, 20);
    push_back(a, 30);
    push_back(a, 40);

    show_list(a);

    Node* temp = a->prox; */

    insert(&r, 10);
    insert(&r, 12);
    insert(&r, 13);
    insert(&r, 1);
    insert(&r, 2);


    printf("\nPre order\n");
    in_order_print(&r);

    struct node* ta = find_largest_element(&r);

    printf("%i", ta->value);

    remove_smallest_element(&r);

    printf("\nPre order\n");
    in_order_print(&r);

    return 0;

}
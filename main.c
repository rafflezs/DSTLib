#include "/home/rafflezs/Documentos/DSTLib/DataType/List/doubly.h"
//#include "DataType/simply.h"

int main(){

    List* a = create_list();

    push_back(a ,1);
    push_back(a ,2);
    push_back(a ,3);
    push_back(a ,4);
    push_back(a ,5);
    push_back(a ,6);
    push_back(a ,3);

    show_list(a);

    insert(a, 2, 11, 4);

    show_list(a);

    return 0;

}
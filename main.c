#include "/home/rafflezs/Documentos/DSTLib/DataType/circular.h"
//#include "DataType/simply.h"

int main(){

    List* a = create_list();

    insert_back(a, 10);

    printa(begin(a));

    insert_front(a, 5);
    insert_front(a, 1);
    insert_back(a, 7);
    insert_front(a, 16);
    insert_back(a, 102);
    insert_front(a, 2245);
    insert_front(a, 9);

    show_list(a);

    printa(begin(a));
    printa(end(a));

    return 0;

}
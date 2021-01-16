#include "DataType/sll.h"

int main(){

    List* l1 = create_list();

/*     push_back(l1, 1);
    show_list(l1);
    
    push_back(l1, 2);
    show_list(l1);    
    
    push_back(l1, 3);
    show_list(l1);    
    
    push_back(l1, 4);
    show_list(l1); */

    pop_back(l1);
    show_list(l1);

    return 0;

}
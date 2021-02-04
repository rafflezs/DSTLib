#include "/home/rafflezs/Documentos/DSTLib/DataType/Tree/binary.h"

Node* create_tree(){
    Node* root = (Node*) malloc( sizeof( struct node ) );
    root = NULL;
    return root;
}

void insert(Node** root, int value){

    if(*root == NULL){
        
        Node* temp = (Node*) malloc( sizeof( struct node ) );
        temp->value = value;
        temp->left = temp->right = NULL;

        *root = temp;
    }else{
        if(value > (*root)->value){
            insert( &(*root)->right, value);
        }else{
            insert( &(*root)->left, value);
        }
    }

}

void pre_order_print(Node** root){

    if(*root != NULL){
        printf("%i\n", (*root)->value);
        pre_order_print(&(*root)->left);
        pre_order_print(&(*root)->right);
    }
}

void in_order_print(Node** root){

    if(*root != NULL){
        in_order_print(&(*root)->left);
        printf("%i\n", (*root)->value);
        in_order_print(&(*root)->right);
    }
}

void post_order_print(Node** root){

    if(*root != NULL){
        post_order_print(&(*root)->left);
        post_order_print(&(*root)->right);
        printf("%i\n", (*root)->value);
    }
}

int size(Node** root){

    if(*root == NULL){
        return 0;
    }

    return ( 1 + size( &(*root)->right ) + size( &(*root)->left ) );

}

Node* find_largest_element(Node** tree){

    if(*tree == NULL){
        return NULL;
    }

    if((*tree)->right == NULL){
        return *tree;
    }

    return find_largest_element(&(*tree)->right);
}

Node* find_smallest_element(Node** tree){

    if(*tree == NULL){
        return NULL;
    }

    if((*tree)->left == NULL){
        return *tree;
    }

    return find_smallest_element(&(*tree)->left);
}

int remove_largest_element(Node** tree){

    if(*tree == NULL){
        return 0;
    }

    if((*tree)->right == NULL){
        Node* temp = *tree;
        *tree = temp->left;
        free(temp);
        return 1;
    }

    return remove_largest_element(&(*tree)->right);

}

int remove_smallest_element(Node** tree){

    if(*tree == NULL){
        return 0;
    }

    if((*tree)->right == NULL){
        Node* temp = *tree;
        *tree = temp->right;
        free(temp);
        return 1;
    }

    return remove_smallest_element(&(*tree)->left);
}
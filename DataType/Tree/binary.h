#ifndef BINARY_H
#define BIANRY_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node* left, *right;
    int value;
}Node;

Node* create_tree();
void insert(Node** tree, int value);

void pre_order_print(Node** tree);
void in_order_print(Node** tree);
void post_order_print(Node** tree);

int size(Node** tree);

Node* find_largest_element(Node** tree);
Node* find_smallest_element(Node** tree);

int remove_largest_element(Node** tree);
int remove_smallest_element(Node** tree);

#endif
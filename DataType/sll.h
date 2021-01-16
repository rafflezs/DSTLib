//Simply linked list

#ifndef SLL_H
#define SLL_H

#include <stdio.h>
#include <stdlib.h>

typedef struct list List;

List* create_list();

void show_list(List* list);

int push_front(List* list, int value);
int push_back(List* list, int value);

int pop_front(List* list);
int pop_back(List* list);

int find(List* list, int value);
int empty(List* list);
int delete_list(List* list);

List* concatenate(List* l1, List* l2);
List* shuffle(List* list);

#endif //!_SLL_H
//Simply linked list

#ifndef SLL_H
#define SLL_H

#include <stdio.h>
#include <stdlib.h>

typedef struct list List;
typedef struct node Node;

/*
 * Allocate the memory space for one list
 * ande initializes its values.
 *
 * @param NULL.
 * @return Empty List*.
 */
List* create_list(); // Done && tested 


/*
 * Print list nodes.
 *
 * @param List*.
 * @return NULL.
 */
void show_list(List* list); // Done && tested


/*
 * Insert a new node as the first one and
 * returns whether the operations succeeded.
 *
 * @param List*, value to be inserted.
 * @return true of false.
 */
int push_front(List* list, int value); // Done && tested 


/*
 * Insert a new node as the last one and
 * returns whether the operations succeeded.
 * 
 * @param List*, value to be inserted.
 * @return true of false.
 */
int push_back(List* list, int value); // Done && tested


/*
 * Erases the first node on a list and
 * returns whether the operations succeeded.
 *
 * @param List*.
 * @return true of false.
 */
int pop_front(List* list); // Done && tested


/*
 * Erases the last node on a list and
 * returns whether the operations succeeded.
 *
 * @param List*.
 * @return true of false.
 */
int pop_back(List* list); // Done && tested


/*
 * Find a value within a list and return all
 * nodes containing it.
 *
 * @param List*, value to be found.
 * @return Empty List*.
 */
List* find(List* list, int value); // Done && tested


/*
 * Returns whether the list is empty or not.
 *
 * @param List*.
 * @return true or false.
 */
int empty(List* list); // Done && tested


/*
 * Returns the size of a given list.
 *
 * @param List*.
 * @return Size of the list.
 */
int size(List* list); // Done && tested


/*
 * Erase a node of a given list and
 * returns whether the operation succeeded.
 *
 * @param List*, Node* address.
 * @return true or false.
 */
int erase_node(List* list, Node* n); // Done && tested


/*
 * Erase a node of a certain index
 * returns whether the operation succeeded.
 *
 * @param List*, index.
 * @return true or false.
 */
int erase_index(List* list, int index); // Done && tested


/*
 * Erase all the nodes of a list and
 * returns whether the operation succeeded.
 *
 * @param List*.
 * @return true or false.
 */
int clear(List* list); // Done && tested


/*
 * Concatenates a second list on the back of
 * the first list, and returns a new one.
 *
 * @param List* 1, List* 2.
 * @return New concatenated List*.
 */
List* concatenate(List* l1, List* l2); //TBD


/*
 * Shuffles a given list and returns it.
 *
 * @param List*.
 * @return New shuffled List*.
 */
List* shuffle(List* list); //TBD


/*
 * Advances a list n times and returns the node.
 *
 * @param List*, n advances.
 * @return Node*.
 */
Node* advance(List* list, int n); // Done && tested

//unique -> deletes duplicated value
//reverse -> inverts list
//insert -> insert element, qtd of copies
//swap -> swaps two iterators or values
//front -> access first node
//back -> access last node

//begin -> returns first iterator
//end -> returns last iterator

void printa(Node* n); // Done && tested

#endif //!_SLL_H
//Doubly linked-list

#ifndef DOUBLY_H
#define DOUBLY_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node* next;
    struct node* prev;
}Node;

typedef struct list{
    Node* front;
    Node* last;
} List;

/*
 * Allocate the memory space for one list
 * ande initializes its values.
 *
 * @param NULL.
 * @return Empty List*.
 */
List* create_list(); // Done && tested 


/*
 * Returns the first node of a list.
 *
 * @param List*.
 * @return Header node.
 */
Node* begin(List* l1);


/*
 * Return the last node of a list.
 *
 * @param List*.
 * @return Footer node.
 */
Node* end(List* l1);

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
int remove_front(List* list); // Done && tested


/*
 * Erases the last node on a list and
 * returns whether the operations succeeded.
 *
 * @param List*.
 * @return true of false.
 */
int remove_back(List* list); // Done && tested

/*
 * Returns the first appearence of a given
 * number.
 *
 * @param List*, value to be found.
 * @return int node index != 0.
 */
int get(List* list, int value); // Done && tested


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
 * Erase the first node that appears a given value.
 *
 * @param List*, int value.
 * @return true or false.
 */
int remove_value(List* list, int value); // Done && tested


/*
 * Erase a node of a certain index
 * returns whether the operation succeeded.
 *
 * @param List*, index.
 * @return true or false.
 */
int remove_at(List* list, int index); // Done && tested


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

/*
* Replace the first occurence of a value
* with another value.
*
* @param List*, value to replaced, replacing value
* @return true or false.
*/
int replace(List* list, int value, int rep);

/*
* Replace the all occurences of a value
* with another value.
*
* @param List*, value to replaced, replacing value
* @return true or false.
*/
int replace_all(List* list, int value, int rep);

/*
* Insert a value n times in a given position.
*
* @param List*, index position, value
* @return true or false.
*/
int insert(List* list, int pos, int value, int n);

/*
* Swaps two values.
*
* @param List*, value 1, value 2
* @return true or false.
*/
int swap(List* list, int v1, int v2);

/*
* Prints a node with address value and data value
*
* @param Node
* @return NULL
*/
void printa(Node* n); // Done && tested

#endif //!_SLL_H
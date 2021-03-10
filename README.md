
# :speech_balloon: About this
Data Structure Template Library (DSTLib for us brazilians funny bois) is a collection of headers and libraries
developed in C containing all the important Abstract Data Types and its operations, eg:

- [X] [List](#Lists)
    - [X] Simply linked
    - [X] Doubly linked
    - [X] Circular
- [ ] [Stack](#Stack)
- [ ] [Queue](#Queue)
    - [ ] Priority Queue
- [ ] [Tree](#Tree) (New)
    - [ ] Binary tree
    - [ ] Red-Black Tree
    - [ ] B-Tree

# :dart: Data Type Expected Operations (and kinda how it works)

## Lists

Operations:

- [X] get() – Return an element from the list at any given position.
- [X] push() – Insert an element at any position of the list.
- [X] remove() – Remove the first occurrence of any element from a non-empty list.
- [X] removeAt() – Remove the element at a specified location from a non-empty list.
- [X] replace() – Replace an element at any position by another element.
- [X] size() – Return the number of elements in the list.
- [X] empty() – Return true if the list is empty, otherwise return false.

## Stack

Operations:

[X] push() – Insert an element at one end of the stack called top.
[X] pop() – Remove and return the element at the top of the stack, if it is not empty.
- peek() – Return the element at the top of the stack without removing it, if the stack is- not empty.
- size() – Return the number of elements in the stack.
- empty() – Return true if the stack is empty, otherwise return false.

## Queue

Operations:

- enqueue() – Insert an element at the end of the queue.
- dequeue() – Remove and return the first element of the queue, if the queue is not empty.
- peek() – Return the element of the queue without removing it, if the queue is not empty.
- size() – Return the number of elements in the queue.
- empty() – Return true if the queue is empty, otherwise return false.

## Tree

Operations:

- insert();
- traverse();
    - pre_order;
    - in_order;
    - post_order;
- search();
- size();
- find
    - biggest_element();
    - smallest_element();
- delete_node();
    - any_node;
    - biggest;
    - smallest;
- delete_tree();
- show_leaf();

### B-Tree

- [ ] Traversal - inOrder();
- [ ] insert
    - [ ] SplitChild();

## To put some challenge:

I've decided to implement some (usually asked) operations, like:

- concatenate() - Joins two list end-to-end.
- advance() - Advance _n_ times in a list returning the current node.
- shuffle() - Shuffles a given list to a randomic order.
- reverse() - (Is it called reverse or inverse?) Makes a list go backwards _*?*_.
- unique() - Deletes repeated values.
- insert() - (May appear with other name) Insert a value _n_ times.
- swap() - Swaps two values (in order of appearence).

# :computer: References and Technologies
[Raw C/C++] (https://www.cplusplus.com/) - this is a raw application for learning purposes, so I limited myself
to use only the language itself and what it conveys in its STL form.

# :heavy_exclamation_mark: Disclaimer
This is a test application. I do not responsabilize for any damage or harm caused by the use of this Library in
your projects.

# :mortar_board: Acknowledgment
[Manuel|Beta4rrio](https://github.com/Bet4Arrio "Code Reviewer") He had the idea first, I just picked the better name.

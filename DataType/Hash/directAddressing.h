#include <stdio.h>
#include <stdlib.h>

typedef struct table{
    int key;
}Table;

Table* create_table( int size );

int hash( int key, int size );
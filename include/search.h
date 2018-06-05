#ifndef SEARCH_H_
#define SEARCH_H_

#include "cube.h"

typedef struct way_node{
    struct way_node* state_last;
    struct way_node* queue_next;
    struct way_node* hash_next;
    u8 act;
    cube* C;
} way_node;



#endif

#ifndef CUBE_H_
#define CUBE_H_

#include "cube.h"

typedef struct way_node{
    struct way_node* last;
    struct way_node* next;
    u8 act;
    cube* C;
} way_node;

#endif

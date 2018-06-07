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

void queue_create(way_node* node);
void queue_push(way_node* node);
way_node *queue_pop();
way_node *create_node(cube *C);
way_node *search_phase1(way_node *head);

#endif

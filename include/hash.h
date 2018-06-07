#ifndef HASH_H_
#define HASH_H_

#include "cube.h"
#include "search.h"

way_node* hash(way_node *node);
u8 is_visted(way_node* node);
void hash_add(way_node* last_node,way_node* new_node);
u8 hash_search(way_node* hash_start, way_node* node);

#endif

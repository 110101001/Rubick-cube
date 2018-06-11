#include "../include/hash.h"
#include "../include/cube.h"
#include "../include/search.h"
#include "../sys.h"

way_node* node_hash[12][8];

way_node* hash(way_node *node){
    return node_hash[node->C->ea[0]][node->C->ca[0]];
}

void hash_init(){
    for(int i=0;i<12;i++){
        for(int j=0;j<8;j++){
            node_hash[i][j]=0;
        }
    }
}

u8 is_visted(way_node* node){
   way_node* hash_start; 
   hash_start=hash(node);
   return hash_search(hash_start,node);
}

void hash_add(way_node* last_node,way_node* new_node){
    last_node->hash_next=new_node;
    new_node->hash_next=0;
}

void hash_list_start(way_node* node){
    node_hash[node->C->ea[0]][node->C->ca[0]]=node;
    node->hash_next=0;
}

u8 hash_search(way_node* hash_start, way_node* node){
    way_node* hash_present;
    hash_present=hash_start;
    if(hash_start!=0){
        if(cube_match(hash_present->C,node->C)==0)
            return 0;
        while(hash_present->hash_next!=0){   
            hash_present=hash_present->hash_next;
            if(cube_match(hash_present->C,node->C)==0)
                return 0;
        }
        hash_add(hash_present,node);
    }
    else{
       hash_list_start(node); 
    }
    return 1;
}

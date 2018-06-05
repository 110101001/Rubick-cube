#include "../include/search.h"
#include "../include/cube.h"
#include "../sys.h"

way_node *queue_buttom_pointer;
way_node *queue_top_pointer;

void queue_create(way_node* node){
    queue_top_pointer=node;
    queue_buttom_pointer=node;
    node->state_last=0;
}

void queue_push(way_node* node){
    queue_top_pointer->queue_next=node; 
    queue_top_pointer=node;
}

way_node *queue_pop(){
    if(queue_top_pointer==queue_buttom_pointer) 
        return (way_node*)0;
    way_node* ret=queue_buttom_pointer;
    queue_buttom_pointer=queue_buttom_pointer->queue_next;
    return ret;
}

u8 is_visted(cube *C){
    //TODO:use hash to find same cube
}

way_node *create_node(cube *C){
    way_node* new_node;
    new_node=(way_node*)malloc(sizeof(way_node));
    new_node->C=C;
    return new_node;
}

int search_phase1(way_node *head){
    
}

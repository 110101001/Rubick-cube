#include "../cube_solve.h"
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


way_node *create_node(cube *C){
    way_node* new_node;
    new_node=(way_node*)malloc(sizeof(way_node));
    new_node->C=C;
    return new_node;
}

way_node* search_phase1(way_node *head){
    way_node* present;
    present=head;
    while(cube_match_phase1(present->C)){
        //printf("%d:\n",present->act);
        //cube_print(present->C);
        way_node* new_node;
        for(int i=0;i<18;i++){
            new_node=create_node(cube_copy(present->C));
            cube_operation(new_node->C,i);
            if(is_visted(new_node)!=0){
                new_node->state_last=present;
                new_node->act=i;
                queue_push(new_node);
            }
            else{
                free(new_node->C);
                free(new_node);
            }
        }
        present=queue_pop();
    }
    return present;
}

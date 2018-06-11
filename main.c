#include "cube_solve.h"
#include "sys.h"

extern cube restored;

int main(){ 
    cube *New;
    New=cube_copy(&restored);
    cube_operation(New,3);
    cube_operation(New,1);
    cube_operation(New,16);
    cube_operation(New,11);
    cube_operation(New,3);
    cube_operation(New,6);
    way_node* begin=create_node(New);
    queue_create(begin);
    hash_init();
    cube_print(search_phase1(begin)->C);
    return 0;
}

#include "cube_solve.h"
#include "sys.h"

extern cube restored;

int main(){ 
    cube *New;
    way_node *res;
    New=cube_copy(&restored);
    
    cube_operation(New,6);
    cube_operation(New,3);
    cube_operation(New,11);
    cube_operation(New,16);

    way_node* begin=create_node(New);
    queue_create(begin);
    hash_init();
    res=search_phase1(begin);
    cube_print(res->C);
    Get_path(res);
    return 0;
}

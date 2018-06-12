#include "cube_solve.h"
#include "sys.h"

extern cube restored;

int main(){ 
    cube *New;
    way_node *res;
    New=cube_copy(&restored);
    
    cube_operation(New,5);
    cube_operation(New,5);

    way_node* begin=create_node(New);
    queue_create(begin);
    hash_init();
    res=search_phase1(begin);
    res=search_phase2(res);
    cube_print(res->C);
    Get_path(res);
    return 0;
}

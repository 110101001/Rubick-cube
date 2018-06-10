#include "cube_solve.h"
#include "sys.h"

extern cube restored;

int main(){ 
    cube *New;
    New=cube_operation(&restored,0);
    way_node* begin=create_node(&restored);
    cube_print(New);
    search_phase1(begin);
    return 0;
}

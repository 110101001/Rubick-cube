#include "cube_solve.h"
#include "sys.h"

extern cube restored;

int main(){ 
    way_node* begin=create_node(&restored);
    search_phase1(begin);
    return 0;
}

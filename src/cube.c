#include "../include/cube.h"
#include "../sys.h"
cube* cube_operation(cube *C,u8 op){
    u8 temp;
    switch(op){
        case 0:
            circulate(C->ea[0],C->ea[1],C->ea[2],C->ea[3]);
            circulate(C->ca[0],C->ca[1],C->ca[2],C->ca[3]);
        case 1:
            circulate2(C->ea[0],C->ea[1],C->ea[2],C->ea[3]);
            circulate2(C->ca[0],C->ca[1],C->ca[2],C->ca[3]);
        case 2:
            circulate(C->ea[3],C->ea[2],C->ea[1],C->ea[0]);
            circulate(C->ca[3],C->ca[2],C->ca[1],C->ca[0]);
        case 3:
            circulate(C->ea[3],C->ea[10],C->ea[7],C->ea[11]);
            circulate(C->ca[3],C->ca[2],C->ca[6],C->ca[7]);
            crotate(C->ca[3]);
            crotate2(C->ca[2]);
            crotate(C->ca[6]);
            crotate2(C->ca[7]);
        case 4:
            circulate2(C->ea[3],C->ea[10],C->ea[7],C->ea[11]);
            circulate2(C->ca[3],C->ca[2],C->ca[6],C->ca[7]);
        case 5:
            circulate(C->ea[11],C->ea[7],C->ea[10],C->ea[3]);
            circulate(C->ca[7],C->ca[6],C->ca[2],C->ca[3]);
            crotate2(C->ca[3]);
            crotate(C->ca[2]);
            crotate2(C->ca[6]);
            crotate(C->ca[7]);
        case 6:
            circulate(C->ea[0],C->ea[11],C->ea[4],C->ea[8]);
            circulate(C->ca[0],C->ca[3],C->ca[7],C->ca[4]);
            erotate(C->ea[0]);
            erotate(C->ea[11]);
            erotate(C->ea[4]);
            erotate(C->ea[8]);
            crotate(C->ca[0]);
            crotate2(C->ca[3]);
            crotate(C->ca[7]);
            crotate2(C->ca[4]);
        case 7:
            circulate2(C->ea[0],C->ea[11],C->ea[4],C->ea[8]);
            circulate2(C->ca[0],C->ca[3],C->ca[7],C->ca[4]);
        case 8:
            circulate(C->ea[8],C->ea[4],C->ea[11],C->ea[0]);
            circulate(C->ca[4],C->ca[7],C->ca[3],C->ca[0]);
            erotate(C->ea[0]);
            erotate(C->ea[11]);
            erotate(C->ea[4]);
            erotate(C->ea[8]);
            crotate2(C->ca[0]);
            crotate(C->ca[3]);
            crotate2(C->ca[7]);
            crotate(C->ca[4]);
        case 9:
            circulate(C->ea[7],C->ea[6],C->ea[5],C->ea[4]);
            circulate(C->ca[7],C->ca[6],C->ca[5],C->ca[4]);
        case 10:
            circulate2(C->ea[7],C->ea[6],C->ea[5],C->ea[4]);
            circulate2(C->ca[7],C->ca[6],C->ca[5],C->ca[4]);
        case 11:
            circulate(C->ea[4],C->ea[5],C->ea[6],C->ea[7]);
            circulate(C->ca[4],C->ca[5],C->ca[6],C->ca[7]);
        case 12:
            circulate(C->ea[1],C->ea[8],C->ea[5],C->ea[9]);
            circulate(C->ca[1],C->ca[0],C->ca[4],C->ca[5]);
            crotate(C->ca[1]);
            crotate2(C->ca[0]);
            crotate(C->ca[4]);
            crotate2(C->ca[5]);
        case 13:
            circulate2(C->ea[1],C->ea[8],C->ea[5],C->ea[9]);
            circulate2(C->ca[1],C->ca[0],C->ca[4],C->ca[5]);
        case 14:
            circulate(C->ea[9],C->ea[5],C->ea[8],C->ea[1]);
            circulate(C->ca[5],C->ca[4],C->ca[0],C->ca[1]);
            crotate2(C->ca[1]);
            crotate(C->ca[0]);
            crotate2(C->ca[4]);
            crotate(C->ca[5]);
        case 15:
            circulate(C->ea[2],C->ea[9],C->ea[6],C->ea[10]);
            circulate(C->ca[2],C->ca[1],C->ca[5],C->ca[6]);
            erotate(C->ea[2]);
            erotate(C->ea[9]);
            erotate(C->ea[6]);
            erotate(C->ea[10]);
            crotate(C->ca[2]);
            crotate2(C->ca[1]);
            crotate(C->ca[5]);
            crotate2(C->ca[6]);
        case 16:
            circulate2(C->ea[2],C->ea[9],C->ea[6],C->ea[10]);
            circulate2(C->ca[2],C->ca[1],C->ca[5],C->ca[6]);
        case 17:
            circulate(C->ea[10],C->ea[6],C->ea[9],C->ea[2]);
            circulate(C->ca[6],C->ca[5],C->ca[1],C->ca[2]);
            erotate(C->ea[2]);
            erotate(C->ea[9]);
            erotate(C->ea[6]);
            erotate(C->ea[10]);
            crotate2(C->ca[2]);
            crotate(C->ca[1]);
            crotate2(C->ca[5]);
            crotate(C->ca[6]);
    }
}

#ifndef CUBE_H_
#define CUBE_H_

#define u8 unsigned char

#define swap(a,b)\
    temp=a;\
    a=b;\
    b=temp

#define circulate(a,b,c,d)\
    temp=d;\
    d=c;\
    c=b;\
    b=a;\
    a=temp

#define circulate2(a,b,c,d)\
    swap(a,c);\
    swap(b,d)
    
#define crotate(a)\
    a+=1;\
    a%=3

#define erotate(a)\
    a+=1;\
    a%=2

#define crotate2(a)\
    a-=1;\
    a%=3

typedef struct cube{
    u8 ca[8];
    u8 cr[8];
    u8 ea[12];
    u8 er[12];
} cube;

cube* cube_operation(cube *C_old,u8 op);
cube* cube_copy(cube *C);
u8 cube_match(cube *C1,cube *C2);

#endif

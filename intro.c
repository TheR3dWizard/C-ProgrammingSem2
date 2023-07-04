#include <stdio.h>

int main(){
    int mat[3][4];
    
    int (*p)[4];
    p = mat;            //pointer to an array of 4 integers
    printf("%d",*p);

    int *q[4];          //array of 4 pointers
    q[0] = mat;

}
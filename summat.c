#include <stdio.h>

int main(){
    int mat[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int (*p)[4];
    p = mat;

    int sum = 0;
    for(int j = 0;j<4;j++){
    for(int i = 0;i<3;i++){
        sum += *(p[i]+j);        //traversing with subscript
    }
    }
    printf("%d",sum);
}
#include <stdio.h>

int main(){
    int mat[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int (*p)[4];
    p = mat;

    //p = 1st element of 1st row, p+1 is 1st element of second row
    printf("%d %d\n",*(*p),*(*(p+1)));


    //need 2 stars to access value
    printf("%d %d %d\n",p,*p,**p); //6422236 6422236 1
    
    

    for(int j = 0;j<4;j++){
    for(int i = 0;i<3;i++){
        printf("%d ",*(*(p+i)+j));      //traversing with arithmetic
    }
    printf("\n");
    }

    

    for(int j = 0;j<4;j++){
    for(int i = 0;i<3;i++){
        printf("%d ",*(p[i]+j));        //traversing with subscript
    }
    printf("\n");
    }

    // *(*(p+i)+j) goes to ith row and jth column
}
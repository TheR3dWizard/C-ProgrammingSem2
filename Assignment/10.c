#include <stdio.h>
#include <stdlib.h>

float* avg(float** arr,int rnum,int cnum){
    float* avgarr = malloc(rnum*sizeof(int));
    for(int i = 0;i<rnum;i++){
        float sum = 0;
        for(int j = 0;j<cnum;j++){
            sum += *(*(arr+i)+j);
        }
        avgarr[i] = sum/cnum;
    }
    return avgarr;
}


int main(){
    int rnum = 2,cnum = 2;
    // printf("Enter the number of rows and columns: ");
    // scanf("%d %d",&rnum,&cnum);
    float** arr = malloc(rnum*sizeof(int));
    for(int i = 0;i<rnum;i++){
        arr[i] = malloc(cnum*sizeof(int));
        for(int j = 0;j<cnum;j++){
            printf("Enter the element at row %d and column %d: ",i+1,j+1);
            scanf("%f",*(arr+i)+j);
        }
    }
    float* avgarr = avg(arr,rnum,cnum);
    for(int i = 0;i<rnum;i++){
        printf("%0.2f ",*(avgarr+i));
    }
}
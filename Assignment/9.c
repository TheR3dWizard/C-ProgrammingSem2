#include <stdio.h>

int* rotate(int arr[3][3],int row,int col){
    int tarr[row][col];
    //int *tarrptr = tarr;
    printf("Original array\n");
    for(int i =0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i =0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("%d %d\n",row-j,col-i);
            tarr[i][j] = arr[2-j][i];
        }
    }
    for(int i =0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("%d ",tarr[i][j]);
        }
        printf("\n");
    }
}




int main(){
    int row = 3,col = 3;
    int arr[row][col];
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("Enter element at (%d,%d): ",i,j);
            scanf("%d",&arr[i][j]);
            printf("\n");
        }
    }
    
    rotate(arr,3,3);
}
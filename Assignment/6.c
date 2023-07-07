#include <stdio.h>

void find(int arr[][4],int row,int col){
    int biggest = 0,rnum,cnum;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            if(arr[i][j] == 1){
                int k = 0;
                while(arr[i][j+k] == 1 && arr[i+k][j] == 1 && arr[i+k][j+k] == 1){
                    if (k>biggest)
                        biggest = k;
                        rnum = i;
                        cnum = j;
                    k++;
                }
            }
        }
    }
    printf("Biggest submatrix is of size %d at (%d,%d)",biggest,rnum,cnum);
}

void printarr(int arr[][4],int row,int col){
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int arr[4][4] = {{1,1,1,1},{0,1,1,0},{1,1,1,1},{0,1,1,1}};
    printarr(arr,4,4);
    find(arr,4,4);
}
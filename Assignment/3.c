#include <stdio.h>

int** trans(int arr[][3],int row,int col){

    
    printf("Original Array\n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int **tarr = malloc(row * sizeof(int*));
    for(int i = 0;i<col;i++){                       //Mem allocation of 2D array
        tarr[i] = malloc(col *sizeof(int));
    }
    
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){                   //placing transposes
            tarr[i][j] = arr[j][i];
        }
    }
    // printf("Transpose not returned:\n");
    // for(int i = 0;i<3;i++){
    //     for(int j = 0;j<3;j++){
    //         printf("%d ",tarr[i][j]);
    //     }
    //     printf("\n");
    // }
    //int* ttarr[col];
    // for(int i = 0;i<col;i++){
    //     ttarr[i] = &tarr[0][i];
    //     printf("%d ",ttarr[i]);
    // }
    return tarr;
}

int main(){
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int **output = trans(arr,3,3);
    printf("Transposed Array:\n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",output[i][j]);
        }
        printf("\n");
    }
}
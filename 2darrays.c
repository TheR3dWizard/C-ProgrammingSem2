#include <stdio.h>

int main(){
    int arr[3][2],arr1[3][2];
    printf("Enter elements of array 1:\n");
    for(int i= 0;i<3;i++){
        for(int j = 0;j<2;j++){
            printf("Enter element:\n");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter elements of array 2:\n");
    for(int i= 0;i<3;i++){
        for(int j = 0;j<2;j++){
            printf("Enter element:\n");
            scanf("%d",&arr[i][j]);
        }
    }
    //print a 2D array
    printf("Elements of Array 1:\n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Elements of Array 2:\n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //summing 2 arrays
    printf("Sum of elements in array 1:\n");
    int sum = 0;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<2;j++){
            sum = sum + arr[i][j];
        }
    }
    printf("%d\n",sum);
    //checking for row or column major
    printf("Adress of 1st position: %d\n",&arr[0][0]);
    printf("Adress of 2nd position: %d\n",&arr[0][1]);
    int pos0 = &arr[0][0], pos1 = &arr[0][1];
    if(pos1 == pos0 + 4){
        printf("Row Major");
    }
    else{
        printf("Column Major");
    }


    //upper triangular matrix
    int uarr[4][4];
    for(int i = 0;i<4;i++){
        for(int j = i;j<4;j++){
            printf("Enter element:\n");
            scanf("%d",&uarr[i][j]);
        }
    }
    printf("Upper Triangular Matrix:\n");
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            printf("%d ",uarr[i][j]);
        }
        printf("\n");

    //lower triangluar matrix
    int larr[4][4];
    for(int i = 0;i<4;i++){
        for(int j = 0;j<i;j++){
            printf("Enter element:\n");
            scanf("%d",&larr[i][j]);
        }
    }
    printf("Lower Triangular Matrix:\n");
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            printf("%d ",larr[i][j]);
        }
        printf("\n");
    }
}
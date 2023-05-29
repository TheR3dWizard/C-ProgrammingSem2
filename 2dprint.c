#include <stdio.h>

int main(){
    int row,column;
    printf("Enter row and column size: ");
    scanf("%d %d",row,column);
    int arr[row][column];
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            printf("Enter a number: ");
            scanf("%d",arr[i][j]);
            printf("\n");
        }
    }
    int bign = 0;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            if (arr[i][j] > bign){
                printf("%d \n");
            }
        }
    }
    printf("%d",bign);
}
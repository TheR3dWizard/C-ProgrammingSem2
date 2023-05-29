#include <stdio.h>

int main(){
    int matrix[4][4] = {1,0,0,1,0,1,1,0,1,1,1,1,1,0,0,1};
    //printing matrix
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            if(matrix[i][j] == 1){
                int row = 0,column = 0;
                //finding number of square matrices
                do{
                    row++;
                    column++;
                }
                while(matrix[i+row][j+column] == 1 && matrix[i+row][j] == 1 && matrix[i][j+column] == 1);
                //printing submatrix position
                //int sub[row][column];
                if(row != 1 && column != 1)
                {
                    printf(" Square Submatrix of %d rows and %d columns found at (%d,%d)\n",row,column,j+1,i+1);
                }
                //pritning column subs
                row = 0;
                column = 0;
                do{
                    row++;
                }
                while(matrix[i+row][j] == 1 && matrix[i][j+column] == 0);
                //printing position
                if(row != 1)
                {
                    printf("Column Submatrix of %d rows and %d columns found at (%d,%d)\n",row,column,j+1,i+1);
                }
                //pritning row subs
                row = 0;
                column = 0;
                do{
                    column++;
                }
                while(matrix[i+row][j] == 0 && matrix[i][j+column] == 1);
                //printing position
                if(column != 1)
                {
                    printf("Row Submatrix of %d rows and %d columns found at (%d,%d)\n",row,column,j+1,i+1);
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
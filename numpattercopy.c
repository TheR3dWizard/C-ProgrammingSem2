#include <stdio.h>

int main(){
    int numlines;
    printf("Enter the number of lines: ");
    scanf("%d",&numlines);
    for(int i = 1;i <= numlines;i++){
        for(int l = numlines-i;l >0;l--){
            printf(" ");
        }
        for(int j = 1;j <= i;j++){
            printf("%d ",j);
        }
        for(int k = i-1;k >= 1;k--){
            printf("%d ",k);
        }
        printf("\n");
}
}
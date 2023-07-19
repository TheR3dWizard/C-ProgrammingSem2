#include <stdio.h>

int main(){
    char (*arr)[4];
    for(int i=0;i<5;i++)
    {
        printf("Enter the characters:\n");
        scanf(" %c",&arr);
    
    }
    for(int j=0;j<5;j++)
    {
        printf(" %c",arr[j]);

    }
    return 0;
}
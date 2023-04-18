#include <stdio.h>

int main(){
    int totalnum,start,end;
    printf("Enter the total number of digits printed: ");
    scanf("%d",&totalnum);
    printf("Enter a start number: ");
    scanf("%d",&start);
    printf("Enter a end number: ");
    scanf("%d",&end);
        for(int i = 0;i<totalnum;i++){
            printf("%d ",(i%(end-start+1))+start);
        }
}

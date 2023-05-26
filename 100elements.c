#include <stdio.h>
#define LIMIT 5

int main(){
    int arr[LIMIT];
    for(int i= 0;i < LIMIT;i++){
        printf("Enter an element: ");
        scanf("%d",&arr[i]);
        printf("\n");
    }
    for(int i = 0;i< LIMIT;i++)
        printf("%d\n",arr[i]);

}
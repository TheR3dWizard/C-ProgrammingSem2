#include <stdio.h>

int main(){
    int arr[10],sum = 0,i = 0;
    for(i = 0;i<10;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    } 
    printf("Average is %0.3f",(float)sum/i);
}
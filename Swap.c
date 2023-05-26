#include <stdio.h>

int main(){
    int size;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0;i<size;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int a;
    
    for(int i = 0;i<size-1;i=i+2){
        a = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = a;
    }
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
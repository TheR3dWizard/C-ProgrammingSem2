#include <stdio.h>

int add(int arr[4],int n){
    int *ptr = arr;
    for(int i; i<4;i++){
        *(ptr+i) += n;
    }
    for(int i = 0;i<4;i++){
        printf("%d ",*(ptr+i));
    }
}

int addptr(int *ptr,int n){
    for(int i; i<4;i++){
        *(ptr+i) += n;
    }
    for(int i = 0;i<4;i++){
        printf("%d ",*(ptr+i));
    }
}


int main(){
    int arr[4] = {1,2,3,4};
    int *aptr = arr;
    add(arr,2);
    printf("\n");
    addptr(aptr,3);
    
    // for(int i = 0;i<4;i++){
    //     printf("%d ",arr[i]);
    // }
}

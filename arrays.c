#include <stdio.h>

int main(){
    int intarr[5]; //declaration
    float floatarr[5]  = {1.0,2.0,3.0,4.0,5.0};
    intarr[0] = 1;
    for(int i = 1;i <5;i++){
        intarr[i] = intarr[i-1] + 1;
    }
    for(int i = 0;i <5;i++){
        printf("%d ",intarr[i]);
    }
    printf("\n");
    for(int i = 0;i <5;i++){
        printf("%0.1f ",floatarr[i]);
    }
    printf("%d %d",&intarr, &intarr[0]);
}
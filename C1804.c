#include <stdio.h>

int main(){
    // for(int i = 1;i <=15;i++){
    //     if(i%5 == 0){
    //         continue;
    //     }
    //     printf("%d\n",i);
    // }
    int i = 1;
    while(i<50){
        if(i%5 == 0){
            i++;
            continue;
        }
        if(i==47)
            break;
        printf("%d\n",i);
        i++;
    }
    for(int i = 1;i <= 2;i++){
        for(int j = 2;j<5;j++){
            printf("%d %d\n",i,j);
            if(j%2 == 0){
                break;
            }
        }
    }
}
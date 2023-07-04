#include <stdio.h>


int main(){
    int *p;
    int n;
    scanf("%d",&n);
    p = (int*)calloc(n,sizeof(int));
    for(int i = 0;i<n;i++){
        scanf("%d",&p[i]);
    }
    // for(int i = 0;i<10;i++){
    //     p[i] = i;
    // }
    for(int i = 0;i<n;i++){
        printf("%d ",p[i]);
    }
}
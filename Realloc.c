#include <stdio.h>


int main(){
    int *p;
    int n;
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(int i = 0;i<n;i++){
        scanf("%d",&p[i]);
    }
    // for(int i = 0;i<10;i++){
    //     p[i] = i;
    // }
    for(int i = 0;i<n;i++){
        printf("%d ",p[i]);
    }
    int *f = p;
    f = (int *)realloc(f,sizeof(int)*(n+2));
    for(int i = 0;i<n+2;i++){
        printf("%d ",p[i]);
    }
    f = (int *)realloc(f,sizeof(int)*(n-2));
    for(int i = 0;i<n+2;i++){
        printf("%d ",p[i]);
    }
}
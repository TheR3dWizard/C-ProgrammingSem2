#include <stdio.h>

int fac(int x){
    if(x == 1)
        return 1;
    return x*fac(x-1);
}

int main(){
    printf("%d",fac(5));
}
#include <stdio.h>

int fac(int x){
    if(x == 1)
        return 1;
    return x*fac(x-1);
}

int main(int argc){
    printf("%d",fac(argc));
}
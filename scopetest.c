#include <stdio.h>





int main(){
    extern int i;
    test();
    printf("%d\n",i);
    test();
}
int i;
void test(){
    i = i+1;
    printf("%d\n",i);
}
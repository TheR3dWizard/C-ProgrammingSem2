#include <stdio.h>

void c(int i){
    printf("%d\n",i);
}

void b(){
    int i = 5;
    c(i);
    i = 6;
    c(i);
}
void a(){
    int i = 2;
    b();
}
int main(){
    int i =0;
    a();
}
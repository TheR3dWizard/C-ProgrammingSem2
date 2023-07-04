#include <stdio.h>

int main(){

    int *p[4];
    int a = 10,b = 20,c = 30,d = 40;


    p[0] = &a;
    p[1] = &b;
    p[2] = &c;                              
    p[3] = &d;
    for(int i = 0;i<4;i++)                  //values
        printf("%d ",*i[p]);
    printf("\n");
    for(int i = 0;i<4;i++)                  //addresses
        printf("%d ",p[i]);             

    //i[p] = p[i] = *(p+i) = *(i+p)
}
#include <stdio.h>
#include <string.h>


struct item1{
    int num;
    char name[50];
};

union items{
    int num;
    char name[50];
    struct item1 i;
};


int main(){
    union items item;
    item.num = 10;
    printf("%d\n",item.num);
    strcpy(item.name,"ur mom");
    printf("%s\n",item.name);
    item.i.num = 20;
    strcpy(item.i.name,"ur dad");
    printf("%d\n",item.i.num);
    printf("%s\n",item.i.name);
}
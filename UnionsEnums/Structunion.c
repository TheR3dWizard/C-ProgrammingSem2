#include <stdio.h>
#include <string.h>

struct item1{
    int num;
    char name[50];
};

struct item2{
    int num;
    char name[50];
};

union items{
    struct item1 i;
    struct item2 j;
    int n;
};

int main(){
    union items item;
    item.i.num = 10;
    strcpy(item.i.name,"ur mom");
}
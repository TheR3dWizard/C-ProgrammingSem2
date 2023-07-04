//structure for items in a store
//name,quantity, unit price
//total units present

#include <stdio.h>

struct item{
    char name[50];
    int quantity;
    int price;
};


int sum = 0;

int amount(struct item *p){
    printf("%d\n",(*p).quantity);
    return (*p).quantity;
}


void insertMem(char n[50],int q,int p;char s[50]){
    struct item s = {n,q,p};
}


int main(){
    char n[50];
    char i[50];
    int q;
    int p;
    for(int i = 0;i<3;i++){
        scanf("%s %s %d %d",i,n,q,p);
        insertMem(n,q,p,i);
    }
}


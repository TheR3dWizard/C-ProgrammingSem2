#include <stdio.h>

void add(int* a,int* b,int* c,int s1,int s2){
    for(int i = 0;i<s1;i++)
        c[i] = a[i];
    for(int i = 0;i<s2;i++)
        c[s1+i] = b[i];
}

void sort(int* a,int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int s1,s2;
    printf("enter the sizes of the arrays: ");
    scanf("%d %d",&s1,&s2);
    int* aptr = malloc(s1*sizeof(int));
    int* bptr = malloc(s2*sizeof(int));
    int* cptr = malloc((s1+s2)*sizeof(int));
    printf("enter the elements of the first array: ");
    for(int i = 0;i<s1;i++){
        printf("\nEnter: ");
        scanf("%d",&aptr[i]);
    }
    printf("enter the elements of the second array: ");
    for(int i = 0;i<s2;i++){
        printf("\nEnter: ");
        scanf("%d",&bptr[i]);
    }
    add(aptr,bptr,cptr,s1,s2);
    printf("Not Sorted\n");
    for(int i = 0;i<(s1+s2);i++)
        printf("%d ",cptr[i]);
    sort(cptr,s1+s2);
    printf("\nSorted\n");
    for(int i = 0;i<(s1+s2);i++)
        printf("%d ",cptr[i]);
}
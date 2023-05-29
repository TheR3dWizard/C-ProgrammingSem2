#include <stdio.h>
#include <stdbool.h>


bool isFactor(int n,int x){
    //int n,x;
    printf("Enter two numbers: ");
    scanf("%d %d",n,x);
    bool t = isFactor(n,x);
    printf("Factor property of %d and %d is %c",n,x,t);
    if (n%x == 0){
        return true;
    }
    return false;
}

int isPrime(int x){
    for(int i = 2;i<(x/2);i++){
        if (x%i==0){
            return 0;
        }
    }
    return 1;
}

int PrimeRange(s,e){
    for(int i = s;i<=e;i++){
        if(isPrime(i) == 1){
            printf("%d",i);
        }
    }
}


void sort(int n[],int s){
    for(int i = 0;i<s;i++){
        printf("%d ",n[i]);
    }
}


int main(){
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // int t = isPrime(n);
    // if(t == 1){
    //     printf("%d is a prime number",n);
    // }
    // else{
    //     printf("%d is not a prime number",n);
    // }

    // int s,e;
    // printf("Enter the range: ");
    // scanf("%d %d",s,e);
    // PrimeRange(s,e);

    int num[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    sort(num,4);
}





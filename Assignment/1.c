#include <stdio.h>

float power(int x,int n){
        if(n == 1){
            return x;
        }
        else{
            if(n>1){
            return x*(power(x,n-1));
            }
            else if(n == 0){
                return 1;
            }
            else{
                return power(x,n+1)/x;
            }
        }
}

int main(){
    int base, exp;
    printf("Enter the value of the base: ");
    scanf("%d", &base);
    printf("Enter the value of the power: ");
    scanf("%d", &exp);
    printf("%d^%d = %f\n", base, exp, power(base, exp));
}
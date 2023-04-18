#include <stdio.h>
#include <math.h>

int main(){
    for(int i = 0;i<=1000000;i = i + 1){
      double x = pow(2,i);
      printf("%lf\n",x);
      
    }
}
#include <stdio.h>

int main(){
    int base,limit;
    printf("Enter highest base and limit: ");
    scanf("%d %d",&base,&limit);
    printf("Base is %d \n",base);
    printf("Limit is %d \n",limit);
    for(int i = 1;i<=limit;i++){
      for(int j = 1;j<=base;j = j + 1){
        if((i*j)%5 == 0)
          continue;
        printf("%3d |",i*j);
      }
      printf("\n");
    }


}
#include <stdio.h>

// int main(){
//     int x = 15;
//     int *ptr = &x;
//     printf("%d %d",x,*ptr);
// }

// int main(){
//     float f = 15.0;
//     float* fptr = &f;
//     printf("%f %f",f,*fptr);
// }

// int main(){
//     float f = 25,*fptr = &f;
//     printf("value = %f %f\n",f,*fptr);
//     printf("Address = %d %d",&f,fptr);
// }

int main(){
    int n1[4] = {1,2,3,4},n2;
    int *p1 = &n1;
    int *p2 = &n2;
    for(int i = 0;i<4;i++){
        printf("%d ",n1[i]);    //1 2 3 4
    }
    printf("\n");
     for(int i = 0;i<4;i++){
        printf("%d ",p1[i]);   //1 2 3 4 
    }
    printf("\n");
    //  for(int i = 0;i<4;i++){
    //     printf("%d",*p1[i]);
    // }
    printf("%d\n",*p1); //1
    printf("%d\n",p2); //memory address
    printf("%d %d\n",*p1,*(p1+1)); //first and second element

    for (int i = 0;i<4;i++){
        printf("%d ",*(p1+i));
    }
    printf("\n");
    int sum = 0;
    for(int i = 0;i<4;i++){
        sum += *(p1+i);
    }
    printf("%d\n",sum);
}
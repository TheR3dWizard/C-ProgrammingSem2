// #include <stdio.h>

// char* spnum(int a){
//     int s1 = 0,s2 = 0;
//     s1 = a%10;
//     for(int i = 0;i<2;i++){
//         a = a/10;
//         s2 += a%10;
//     }
//     if(s1 == s2)
//         return "This is a Special Number";
//     else
//         return "This is not a Special Number";
    
// }
// int factors(int arr[],int num){
//     for(int i = 0;i<sizeof(arr)/sizeof(int);i++){
//         if(num%arr[i] == 0){
//             printf("%d %d\n",sizeof(arr),arr[i]);
//             return 1;
//         }
           
//     }
//     return 0;
// }

#include <stdio.h>

void ptrprint(int s1,int s2,int s3,int *ptr){
    //printf("%d\n",*(ptr+1));
    // for(int i = 0;i<12;i++)
    //     printf("%d\n",ptr+i);
    // for(int i = 0;i<4;i++)
    //     printf("%d\n",*(ptr+s1+i));
    // for(int i = 0;i<4;i++)
    //     printf("%d\n",*(ptr+s1+s2+i));
    //printf("%d\n",*(ptr+s1-1));
    //printf("%d\n",*(ptr+s1+s2-1));
}


int main ( ){
    int arr1[] = {1,2,3,4};
    int arr2[] = {1,2,3,4};
    int arr3[] = {1,2,3,4};
    int *ptr1 = &arr1;
    int *ptr2 = &arr2;
    int *ptr3 = &arr3;
    
    int *arrptr[] = {ptr1,ptr2,ptr3};
    printf("%d\n\n",*arrptr);
    for(int i = 0;i<4;i++)
        printf("%d\n",*arrptr[i]);
    ptrprint(4,4,4,*arrptr);
}

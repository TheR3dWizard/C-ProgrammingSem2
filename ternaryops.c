#include <stdio.h>

// int main(){
//     int n;
//     printf("Enter a number:\n ");
//     scanf("%d",&n);
//     printf("%s",(n%2 == 0) ? "even" : "odd");
    
// }

// int main(){
//     int n1,n2,n3;
//     printf("Enter three numbers:\n ");
//     scanf("%d %d %d",&n1,&n2,&n3);
//     (n1>n2)?((n1>n3)?printf("%d",n1):(n2>n3)?printf("%d",n2):printf("%d",n3)):(n2>n3)?printf("%d",n2):printf("%d",n3);
// }

//left/right shift
// int main(){
//     int a = 5;
//     printf("%d %d",2==2,15>>3);
// }

//input specifiers
int main(){
    char str[100];
    scanf("%[^+ ^ ^- ^/ ^*]",str);
    printf("%s",str);
}

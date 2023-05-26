#include <stdio.h>
//without switch
// int main(){
//     while(1){
//         printf("Add\nSubtract\nMultiply\nDivide\nEnd\n");
//         char c = getchar();
//         if(c == 'a'){
//             int x,y;
//             printf("Enter two numbers: ");
//             scanf("%d %d",&x,&y);
//             printf("%d\n",x + y);
//         }
//         if(c == 's'){
//             int x,y;
//             printf("Enter two numbers: ");
//             scanf("%d %d",&x,&y);
//             printf("%d\n",x - y);
//         }
//         if(c == 'm'){
//             int x,y;
//             printf("Enter two numbers: ");
//             scanf("%d %d",&x,&y);
//             printf("%d\n",x * y);
//         }
//         if(c == 'd'){
//             int x,y;
//             printf("Enter two numbers: ");
//             scanf("%d %d",&x,&y);
//             printf("%d\n",x / y);
//         }
//         if(c == 'e'){
//             break;
//         }
//     }
// }

//with switch
int main(){
    printf("Add\nSubtract\nMultiply\nDivide\nEnd\n");
    char c = getchar();
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    switch(c){
        case 'a':{
            printf("Result is %d\n",x + y);
            break;
        }
        case 's':{
            printf("Result is %d\n",x - y);
            break;
        }
        case 'm':{
            printf("Result is %d\n",x * y);
            break;
        }
        case 'd':{
            printf("Result is %d\n",x / y);
            break;
        }
        default:
            printf("Invalid input\n");
    }
}
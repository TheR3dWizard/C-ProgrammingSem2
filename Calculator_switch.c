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
    do{   
        switch(c){
            case 'a':{
                int x,y;
                printf("Enter two numbers: ");
                scanf("%d %d",&x,&y);
                printf("Result is %d\n",x + y);
                break;
            }
            case 's':{
                int x,y;
                printf("Enter two numbers: ");
                scanf("%d %d",&x,&y);
                printf("Result is %d\n",x - y);
                break;
            }
            case 'm':{
                int x,y;
                printf("Enter two numbers: ");
                scanf("%d %d",&x,&y);
                printf("Result is %d\n",x * y);
                break;
            }
            case 'd':{
                int x,y;
                printf("Enter two numbers: ");
                scanf("%d %d",&x,&y);
                printf("Result is %d\n",x / y);
                break;
            }
            case 'e':
                printf("Ending Program\n");
                break;
            default:
                printf("Invalid Input\n");
        }
}
while (c != 'e');
}
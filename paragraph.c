#include <stdio.h>


int main(){
    char c[20];
    int i = 0;
    while ((c[i] = getchar()) != '\n')
    {
        i++;
    }
    printf("%s\n",c);
    printf("%d",i);
}

// int main(){
//     char c[100];
//     int i = 0;
//     char l = (char)".";
//     for(char s = getch();s != l;i++)
//     {
//         c[i-1] = s;
//     }
//     printf("%s\n",c);
//     printf("%d",i);
// }

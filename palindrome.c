#include <stdio.h>
#include <string.h>

int main(){
    char s;
    scanf("%s",s);
    printf("%c %d",s,10);
    (strcmp(s,strrev(s)))?printf("Not a palindrome"):printf("palindrome");
}
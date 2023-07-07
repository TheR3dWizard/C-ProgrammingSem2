#include <stdlib.h>
#include <stdio.h>

char *uStr(char *str){
    int i = 0, j = 0, k = 0;
    char *uChars = (char *)malloc(sizeof(char) * 100);
    while (str[i] != '\0'){
        j = 0;
        while (uChars[j] != '\0'){
            if (uChars[j] == str[i]){
                break;
            }
            j++;
        }
        if (uChars[j] == '\0'){
            uChars[k] = str[i];
            k++;
        }
        i++;
    }
    uChars[k] = '\0';
    return uChars;
}

int main(){
    char string[100];
    printf("Enter a string: ");
    fgets(string, 100, stdin);
    char *uChars = uStr(string);
    printf("Unique characters in the string are: %s\n", uChars);
}

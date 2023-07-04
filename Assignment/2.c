
#include <stdio.h>

char *uniqueString(char *str){
    int i = 0, j = 0, k = 0;
    char *uniqueChars = (char *)malloc(sizeof(char) * 100);
    while (str[i] != '\0'){
        j = 0;
        while (uniqueChars[j] != '\0'){
            if (uniqueChars[j] == str[i]){
                break;
            }
            j++;
        }
        if (uniqueChars[j] == '\0'){
            uniqueChars[k] = str[i];
            k++;
        }
        i++;
    }
    uniqueChars[k] = '\0';
    return uniqueChars;
}

int main(){
    char string[100];
    printf("Enter a string: ");
    fgets(string, 100, stdin);
    char *uniqueChars = uniqueString(string);
    printf("Unique characters in the string are: %s\n", uniqueChars);
    return 0;
}

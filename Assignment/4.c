#include <stdio.h>
#include <stdlib.h>

char * subPal(char *str){
    int i = 0, j, start = 0, size = 0, check = 1;
    while (str[i] != '\0'){
        j = i + 1;
        while (str[j] != '\0'){
            if (str[i] == str[j]){
                check = 1;
                for (int k = i; k < (i + ((j - i) / 2)); k++){
                    if (str[k] != str[j - k + i]){
                        check = 0;
                        break;
                    }  
                }
                if (check == 1 && (j - i + 1) > size){
                    start = i;
                    size = j - i + 1;
                }
            }
            j++;
        }
        i++;
    }
    
    char* final = malloc(size* sizeof(char));
    for (int i = 0; i < size; i++){
        final[i] = str[start + i];
    }
    return final;
}

int main(void){
    char str[50];
    scanf("%s",str);
    char * final0 = subPal(str);
    printf("%s\n", final0);
}
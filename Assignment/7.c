#include <stdio.h>

void censor(char* s){
    char *c = s;
    int i = 0;
    while(*c!='\0'){
        if(*c == 'a' || *c == 'e' || *c == 'i' || *c == 'o' || *c == 'u'){
        //printf("Here");
           for(int j = i;s[j] != NULL;j++){
               //printf("\n%c",s[j]);
               s[j] = s[j+1];
           }
        }
        c++;
        i++;
    }
    
}
int main(){
    char* s;
    printf("Enter a string: ");
    fgets(s,100,stdin);
    printf("%s",s);
    censor(s);
    printf("\n%s",s);
}


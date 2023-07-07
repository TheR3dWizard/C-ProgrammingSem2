#include <stdio.h>

void censor(char* s){
    char *c = s;
    int i = 0;
    while(*(c+i)!='\0'){
        if(*(c+i) == 'a' || *(c+i) == 'e' || *(c+i) == 'i' || *(c+i) == 'o' || *(c+i) == 'u'){
           for(int j = i;s[j] != NULL;j++){
               s[j] = s[j+1];
           }
        }
        i++;
    }
    
}
int main(){
    char* s;
    printf("Enter a string: ");
    fgets(s,100,stdin);
    censor(s);
    printf("String with no vowels is \n%s",s);
}


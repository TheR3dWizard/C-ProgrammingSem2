#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reader(FILE *ptr,int n){
    char c;
    char* s = malloc(100*sizeof(char));
    int i = 0,k = 0;
    while(s[i] != EOF){
        s[i] = fgetc(ptr); 
        i++;
    }
    printf("%s\n",s);
    return s;
}

int main(){
    FILE *fptr;
    fptr = fopen("text.txt","r");
    char* strings = reader(fptr,100);
    printf("%s\n",strings);
    
}
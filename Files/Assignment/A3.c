#include <stdio.h>

void reader(FILE *ptr,int n){
    int ch[n];
    for (int i = 0; i < n; i++) {
        if (feof(ptr))
            break;
        char c = fgetc(ptr);
        if(c != ',')
            ch[i] = (int)c;
        printf("%c ", ch[i]);
    }
}

int main(){
    FILE *fptr;
    fptr = fopen("Numfile.txt","r");
    reader(fptr,100);
}
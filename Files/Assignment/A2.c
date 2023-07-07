#include <stdio.h>

void reader(FILE *ptr,int n){
    char ch[n];
    for (int i = 0; i < n; i++) {
        ch[i] = fgetc(ptr);
        if (feof(ptr))
            break;
        printf("%c", ch[i]-2);
    }
}


void encrypt(FILE *rptr,FILE *wptr,int n,int k){
    char ch[n];
    for (int i = 0; i < n; i++) { 
        ch[i] = fgetc(rptr)+k;   //Encryption
        if (feof(rptr))
            break;
        //printf("%c", ch[i]-2);
    }
    fputs(ch,wptr);
}



int main(){
    FILE *frptr;
    FILE *fwptr;
    frptr = fopen("text.txt","r");
    fwptr = fopen("eoutput.txt","w");
    encrypt(frptr,fwptr,68,2);
    fclose(fwptr);
    fwptr = fopen("eoutput.txt","r");
    reader(fwptr,68);
}
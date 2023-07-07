#include <stdio.h>

void writer(FILE *ptr,char* s){
    char s1[sizeof(s)+1];
    for(int i = 0;i<sizeof(s);i++){
        s1[i] = s[i];
    }
    //s1[sizeof(*s)] = "\n";
    fputs(s1,ptr);
}

void reader(FILE *ptr,int n){
    char c;
    char s[n];
    int i = 0;
    //c = fgetc(ptr);
    //printf("%c",c);
    while(c != EOF){
       // printf("%c",fgetc(ptr));
        c = fgetc(ptr);
        s[i] = c;
        i++;
    }
    printf("\n%s\n",s);
}

void readerv2(FILE *ptr,int n){
    char c;
    char s[n];
    int i = 0;
    while(!feof(ptr)){
        //printf("%d",ftell(ptr));
        c = fgetc(ptr);
        s[i] = c;
        i++;
    }
    printf("%s\n",s);
}

void seeker(FILE *ptr,int n,int set){
    fseek(ptr,n,set);
}


int main(){
    FILE *fptr;
    int n;
    //write mode
    // fptr = fopen("text.txt","w");
    // printf("Enter number of lines: ");
    // scanf("%d\n",&n);
    // for(int i = 0;i<n;i++){
    //     //printf("%d",i);
    //     char s[50];
    //     gets(s);
    //     fputs(s,fptr);
    // }
    // fclose(fptr);

    //read mode
    char read[100];
    fptr = fopen("text.txt","r");
    reader(fptr,44);
    //fclose(fptr);

    //go back and print again
    fseek(fptr,10,0);
    readerv2(fptr,34);
}


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
    float sum = 0;
    for(int i = 0;i < argc;i++){
        sum += atof(argv[i]);
    }
    printf("%0.2f",sum);
}
#include <stdio.h>
#include <string.h>

int pal(char* s){
    int len = strlen(s);
    int check = 0;
    for(int i=0;i < len ;i++){
        if(s[i] != s[len-i-1]){
            check = 1;
            break;
           }
        }
    
    if (check)
        return 0;
    else
        return 1;

}

void substrings(char* s){
    int len = strlen(s);
    for(int i = 0;i<len;i++){
        for(int j = i;j<len;j++){
            int last = j-i+1;
            printf("%d %d\n",j,last);
            char subs[last];
            int l = 0;
            for(int k = j;k<last;k++){
                subs[l] = s[k];
                l++;
            }
            printf(" String is: %s\n",subs);
        }
    }
}


int main(){
    substrings("Hello Everynyan");
}

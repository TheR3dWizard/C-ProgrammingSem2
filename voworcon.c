#include <stdio.h>

int main(){
    char c;
    scanf("%c",c);
    char vowels[5] = {'a','e','i','o','u'};
    int vowel = 0,consonant = 0;
    for(int i = 0;i<5;i++){
        (c == vowels[i])?vowel++:consonant++;
    }
    (vowel != 0)?printf("Vowel"):printf("Consonant");
}
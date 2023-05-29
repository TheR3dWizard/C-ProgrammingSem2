
//1 Write a program to find the sum of the digits of a given number using a while loop.

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    while(n != 0){
        sum += n%10;
        n = n/10;
    }
    printf("%d",sum);
}

//2 Write a program that takes a character as input and uses the ternary operator to print
//whether the character is a vowel or a consonant.

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

//3 Write a program that takes an integer as input, which represents a month number (1-12),
//and uses the switch statement to print the corresponding month name.

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 1: printf("January");
            break;
        case 2: printf("February");
            break;
        case 3: printf("March");
            break;
        case 4: printf("April");
            break;
        case 5: printf("May");
            break;
        case 6: printf("June");
            break;
        case 7: printf("July");
            break;
        case 8: printf("August");
            break;
        case 9: printf("September");
            break;
        case 10: printf("October");
            break;
        case 11: printf("November");
            break;
        case 12: printf("December");
            break;
        default: printf("Invalid month number");
    }
}

//4 Write a program to check if it is a palindrome

#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf("%s",s);
    
    (strcmp(s,strrev(s)))?printf("Not a palindrome"):printf("palindrome");
}


//5 Write a program using for to print the following pattern.
// *
// * *
// * * *
// * * * *
// * * * * *

#include <stdio.h>

int main(){
    for(int i = 1;i <6;i++){
        for(int j = 0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}

//6 Write a program that takes a 2D array of integers as input and prints the largest element in the
//array.

#include <stdio.h>

int main(){
    int row,column;
    printf("Enter row and column size: ");
    scanf("%d %d",row,column);
    int arr[row][column];
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            printf("Enter a number: ");
            scanf("%d",arr[i][j]);
            printf("\n");
        }
    }
    int bign = 0;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            if (arr[i][j] > bign){
                bign = arr[i][j];
            }
        }
    }
    printf("%d",bign);
}

//7 Write a program that takes a 2D array of characters as input and prints each element in the array
//on a new line.

#include <stdio.h>

int main(){
    int row,column;
    printf("Enter row and column size: ");
    scanf("%d %d",row,column);
    int arr[row][column];
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            printf("Enter a number: ");
            scanf("%d",arr[i][j]);
            printf("\n");
        }
    }
    int bign = 0;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            if (arr[i][j] > bign){
                printf("%d \n");
            }
        }
    }
    printf("%d",bign);
}

//8 Write a program that takes an integer as input and uses the printf function to print the integer in
//hexadecimal format. Use the %x format specifier to print the hexadecimal number.

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("The number in hexadecimal format is: %x",n);
}


// 9 Write a program that takes a string and an integer as input and uses the printf function to print
// them. Use the %s format specifier to print the string and the %5d format specifier to print the
// integer with a minimum width of 5 characters.

#include <stdio.h>
int main(){
    int n;
    char s[100];
    printf("Enter a number followed by a string: ");
    scanf("%d %s",&n,&s);
    printf("The string is %s and the number is %5d",s,n);
}

//10 Write a program that generates a random number between 1 and 100 and asks the user to guess
// the number. Use a do-while loop to keep asking the user for guesses until they correctly guess the
// number.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
   int n,r;
   srand(time(NULL));  
   r = rand() % 10 + 1; 
    do{
        printf("Guess a number from 10 to 100: ");
        scanf("%d",&n);
    }while(n != r);
    printf("Correct Guess!");
}



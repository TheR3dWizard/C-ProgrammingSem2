<font size = 7> **C Programming Lab Notes**</font>


Program: 0405.c (4 May 2023)
--------------------
```

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


```

====================

Program: 100array.c
--------------------
```
#include <stdio.h>

int main(){
    int arr[10],sum = 0,i = 0;
    for(i = 0;i<10;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    } 
    printf("Average is %0.3f",(float)sum/i);
}```


```
```
Program: 100elements.c
--------------------

#include <stdio.h>
#define LIMIT 5

int main(){
    int arr[LIMIT];
    for(int i= 0;i < LIMIT;i++){
        printf("Enter an element: ");
        scanf("%d",&arr[i]);
        printf("\n");
    }
    for(int i = 0;i< LIMIT;i++)
        printf("%d\n",arr[i]);

}
```

====================

Program: 2darrays.c
--------------------
```
#include <stdio.h>

int main(){
    int arr[3][2],arr1[3][2];
    printf("Enter elements of array 1:\n");
    for(int i= 0;i<3;i++){
        for(int j = 0;j<2;j++){
            printf("Enter element:\n");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter elements of array 2:\n");
    for(int i= 0;i<3;i++){
        for(int j = 0;j<2;j++){
            printf("Enter element:\n");
            scanf("%d",&arr[i][j]);
        }
    }
    //print a 2D array
    printf("Elements of Array 1:\n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Elements of Array 2:\n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //summing 2 arrays
    printf("Sum of elements in array 1:\n");
    int sum = 0;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<2;j++){
            sum = sum + arr[i][j];
        }
    }
    printf("%d\n",sum);
    //checking for row or column major
    printf("Adress of 1st position: %d\n",&arr[0][0]);
    printf("Adress of 2nd position: %d\n",&arr[0][1]);
    int pos0 = &arr[0][0], pos1 = &arr[0][1];
    if(pos1 == pos0 + 4){
        printf("Row Major");
    }
    else{
        printf("Column Major");
    }


    //upper triangular matrix
    int uarr[4][4];
    for(int i = 0;i<4;i++){
        for(int j = i;j<4;j++){
            printf("Enter element:\n");
            scanf("%d",&uarr[i][j]);
        }
    }
    printf("Upper Triangular Matrix:\n");
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            printf("%d ",uarr[i][j]);
        }
        printf("\n");

    //lower triangluar matrix
    int larr[4][4];
    for(int i = 0;i<4;i++){
        for(int j = 0;j<i;j++){
            printf("Enter element:\n");
            scanf("%d",&larr[i][j]);
        }
    }
    printf("Lower Triangular Matrix:\n");
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            printf("%d ",larr[i][j]);
        }
        printf("\n");
    }
}
```

====================

Program: 2dpointers.c
--------------------
```
// #include <stdio.h>

// char* spnum(int a){
//     int s1 = 0,s2 = 0;
//     s1 = a%10;
//     for(int i = 0;i<2;i++){
//         a = a/10;
//         s2 += a%10;
//     }
//     if(s1 == s2)
//         return "This is a Special Number";
//     else
//         return "This is not a Special Number";
    
// }
// int factors(int arr[],int num){
//     for(int i = 0;i<sizeof(arr)/sizeof(int);i++){
//         if(num%arr[i] == 0){
//             printf("%d %d\n",sizeof(arr),arr[i]);
//             return 1;
//         }
           
//     }
//     return 0;
// }

#include <stdio.h>

void ptrprint(int s1,int s2,int s3,int *ptr){
    //printf("%d\n",*(ptr+1));
    // for(int i = 0;i<12;i++)
    //     printf("%d\n",ptr+i);
    // for(int i = 0;i<4;i++)
    //     printf("%d\n",*(ptr+s1+i));
    // for(int i = 0;i<4;i++)
    //     printf("%d\n",*(ptr+s1+s2+i));
    //printf("%d\n",*(ptr+s1-1));
    //printf("%d\n",*(ptr+s1+s2-1));
}


int main ( ){
    int arr1[] = {1,2,3,4};
    int arr2[] = {1,2,3,4};
    int arr3[] = {1,2,3,4};
    int *ptr1 = &arr1;
    int *ptr2 = &arr2;
    int *ptr3 = &arr3;
    
    int *arrptr[] = {ptr1,ptr2,ptr3};
    printf("%d\n\n",*arrptr);
    for(int i = 0;i<4;i++)
        printf("%d\n",*arrptr[i]);
    ptrprint(4,4,4,*arrptr);
}
```

====================

Program: 2dprint.c
--------------------
```
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
```

====================

Program: arrays.c
--------------------
```
#include <stdio.h>

int main(){
    int intarr[5]; //declaration
    float floatarr[5]  = {1.0,2.0,3.0,4.0,5.0};
    intarr[0] = 1;
    for(int i = 1;i <5;i++){
        intarr[i] = intarr[i-1] + 1;
    }
    for(int i = 0;i <5;i++){
        printf("%d ",intarr[i]);
    }
    printf("\n");
    for(int i = 0;i <5;i++){
        printf("%0.1f ",floatarr[i]);
    }
    printf("%d %d",&intarr, &intarr[0]);
}
```

====================

Program: bignum.c
--------------------
```
#include <stdio.h>
#include <math.h>

int main(){
    // int row,column;
    // printf("Enter row and column size: ");
    // scanf("%d %d",row,column);
    // int arr[row][column];
    // for(int i = 0;i<row;i++){
    //     for(int j = 0;j<column;j++){
    //         printf("Enter a number: ");
    //         scanf("%d",arr[i][j]);
    //         printf("\n");
    //     }
    // }
    // int bign = 0;
    // for(int i = 0;i<row;i++){
    //     for(int j = 0;j<column;j++){
    //         if (arr[i][j] > bign){
    //             bign = arr[i][j];
    //         }
    //     }
    // }
   int A[] = {4,5,6,7};
   A[10] = 8;
   char s[10] = "Ur mom";
   printf("%d",(int)s[4]);
   return 0;
}
```

====================

Program: C1204.c
--------------------
```
#include <stdio.h>

int main(){
    int totalnum,start,end;
    printf("Enter the total number of digits printed: ");
    scanf("%d",&totalnum);
    printf("Enter a start number: ");
    scanf("%d",&start);
    printf("Enter a end number: ");
    scanf("%d",&end);
        for(int i = 0;i<totalnum;i++){
            printf("%d ",(i%(end-start+1))+start);
        }
}
```

====================

Program: C1804.c
--------------------
```
#include <stdio.h>

int main(){
    // for(int i = 1;i <=15;i++){
    //     if(i%5 == 0){
    //         continue;
    //     }
    //     printf("%d\n",i);
    // }
    int i = 1;
    while(i<50){
        if(i%5 == 0){
            i++;
            continue;
        }
        if(i==47)
            break;
        printf("%d\n",i);
        i++;
    }
    for(int i = 1;i <= 2;i++){
        for(int j = 2;j<5;j++){
            printf("%d %d\n",i,j);
            if(j%2 == 0){
                break;
            }
        }
    }
}
```

====================

Program: Calculator_switch.c
--------------------
```
#include <stdio.h>
//without switch
// int main(){
//     while(1){
//         printf("Add\nSubtract\nMultiply\nDivide\nEnd\n");
//         char c = getchar();
//         if(c == 'a'){
//             int x,y;
//             printf("Enter two numbers: ");
//             scanf("%d %d",&x,&y);
//             printf("%d\n",x + y);
//         }
//         if(c == 's'){
//             int x,y;
//             printf("Enter two numbers: ");
//             scanf("%d %d",&x,&y);
//             printf("%d\n",x - y);
//         }
//         if(c == 'm'){
//             int x,y;
//             printf("Enter two numbers: ");
//             scanf("%d %d",&x,&y);
//             printf("%d\n",x * y);
//         }
//         if(c == 'd'){
//             int x,y;
//             printf("Enter two numbers: ");
//             scanf("%d %d",&x,&y);
//             printf("%d\n",x / y);
//         }
//         if(c == 'e'){
//             break;
//         }
//     }
// }

//with switch
int main(){
    printf("Add\nSubtract\nMultiply\nDivide\nEnd\n");
    char c = getchar();
    do{   
        switch(c){
            case 'a':{
                int x,y;
                printf("Enter two numbers: ");
                scanf("%d %d",&x,&y);
                printf("Result is %d\n",x + y);
                break;
            }
            case 's':{
                int x,y;
                printf("Enter two numbers: ");
                scanf("%d %d",&x,&y);
                printf("Result is %d\n",x - y);
                break;
            }
            case 'm':{
                int x,y;
                printf("Enter two numbers: ");
                scanf("%d %d",&x,&y);
                printf("Result is %d\n",x * y);
                break;
            }
            case 'd':{
                int x,y;
                printf("Enter two numbers: ");
                scanf("%d %d",&x,&y);
                printf("Result is %d\n",x / y);
                break;
            }
            case 'e':
                printf("Ending Program\n");
                break;
            default:
                printf("Invalid Input\n");
        }
}
while (c != 'e');
}
```

====================

Program: Calloc.c
--------------------
```
#include <stdio.h>


int main(){
    int *p;
    int n;
    scanf("%d",&n);
    p = (int*)calloc(n,sizeof(int));
    for(int i = 0;i<n;i++){
        scanf("%d",&p[i]);
    }
    // for(int i = 0;i<10;i++){
    //     p[i] = i;
    // }
    for(int i = 0;i<n;i++){
        printf("%d ",p[i]);
    }
}
```

====================

Program: Class2.c
--------------------
```
#include <stdio.h>
#include <math.h>

int main(){
    for(int i = 0;i<=1000000;i = i + 1){
      double x = pow(2,i);
      printf("%lf\n",x);
      
    }
}
```

====================

Program: EmptyPrint.c
--------------------
```
#include <stdio.h>

int main(){
    int a[10];
    for(int i = 0;i <10;i++){
        printf("%d\n",a[i]);
    }
}
```

====================

Program: factor.c
--------------------
```
#include <stdio.h>
#include <stdbool.h>


bool isFactor(int n,int x){
    //int n,x;
    printf("Enter two numbers: ");
    scanf("%d %d",n,x);
    bool t = isFactor(n,x);
    printf("Factor property of %d and %d is %c",n,x,t);
    if (n%x == 0){
        return true;
    }
    return false;
}

int isPrime(int x){
    for(int i = 2;i<(x/2);i++){
        if (x%i==0){
            return 0;
        }
    }
    return 1;
}

int PrimeRange(s,e){
    for(int i = s;i<=e;i++){
        if(isPrime(i) == 1){
            printf("%d",i);
        }
    }
}


void sort(int n[],int s){
    for(int i = 0;i<s;i++){
        printf("%d ",n[i]);
    }
}


int main(){
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // int t = isPrime(n);
    // if(t == 1){
    //     printf("%d is a prime number",n);
    // }
    // else{
    //     printf("%d is not a prime number",n);
    // }

    // int s,e;
    // printf("Enter the range: ");
    // scanf("%d %d",s,e);
    // PrimeRange(s,e);

    int num[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    sort(num,4);
}




```

====================

Program: factorial.c
--------------------
```
#include <stdio.h>

int fac(int x){
    if(x == 1)
        return 1;
    return x*fac(x-1);
}

int main(int argc){
    printf("%d",fac(argc));
}
```

====================

Program: inputs.c
--------------------
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main() {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);
//     printf("You entered: %c", c);
//     return 0;
// }




// // int getchar(void);
// // int getch(void);
// // int getche(void);



// int main() {
//     char str1[50], str2[50];
//     printf("Enter a string without spaces using scanf: ");
//     scanf("%s", str1);
//     printf("You entered: %s\n", str1);
//     printf("Enter a string without spaces using gets: ");
//     fflush(stdin);
//     gets(str2);
//     printf("You entered: %s", str2);
//     return 0;
// }




// int main() {
//     char str[100];
//     printf("Enter a string with spaces: ");
//     fgets(str, 100, stdin);
//     printf("You entered: %s", str);
//     return 0;
// }



// int main() {
//     char para[1000];
//     printf("Enter a paragraph:\n");
//     fgets(para, 1000, stdin);
//     printf("You entered:\n%s", para);
//     return 0;
// }



// int main() {
//     char para[1000];
//     printf("Enter multiple paragraphs:\n");
//     while (fgets(para, 1000, stdin) != NULL) {
//         printf("%s", para);
//     }
//     return 0;
// }



// int main() {
//     char input;
//     printf("Enter input (press 'd' to exit): ");
//     while ((input = getchar()) != 'd') {
//         printf("%c", input);
//     }
//     return 0;
// }


// int main(){
//     char str[100];
//     gets(str);
//     char str1[100] = strcat(str,"hello");
//     printf("%s",str1);
// }

```

====================

Program: intro.c
--------------------
```
#include <stdio.h>

int main(){
    int mat[3][4];
    
    int (*p)[4];
    p = mat;            //pointer to an array of 4 integers
    printf("%d",*p);

    int *q[4];          //array of 4 pointers
    q[0] = mat;

}
```

====================

Program: items.c
--------------------
```
//structure for items in a store
//name,quantity, unit price
//total units present

#include <stdio.h>

struct item{
    char name[50];
    int quantity;
    int price;
};


int sum = 0;

int amount(struct item *p){
    printf("%d\n",(*p).quantity);
    return (*p).quantity;
}


void insertMem(char n[50],int q,int p;char s[50]){
    struct item s = {n,q,p};
}


int main(){
    char n[50];
    char i[50];
    int q;
    int p;
    for(int i = 0;i<3;i++){
        scanf("%s %s %d %d",i,n,q,p);
        insertMem(n,q,p,i);
    }
}

```

====================

Program: keerhtierror.c
--------------------
```
#include <stdio.h>
  int main() {
    int a,b,result;
    printf("enter the two numbers");
    scanf("%d %d",&a,&b);
    char c=getchar();
    printf("name the function u want to perform");
    switch(c){
      case 'a':{
        result=a+b;
      break;
      }
      case 's':{
        result=a-b;
        break;
      }
    case 'm':{
      result=a*b;
      break;
    }
    case 'd':{
      result=a/b;
      break;
        }

    }
    printf("%d", result);
  }
  ```

====================

Program: matrix.c
--------------------
```
#include <stdio.h>

int main(){
    float matrix[3][2] = {{1,2},{3,4},{5,6}};
}
```

====================

Program: monthnum.c
--------------------
```
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
```

====================

Program: MultiplicationTable.c
--------------------
```
#include <stdio.h>

int main(){
    int base,limit;
    printf("Enter highest base and limit: ");
    scanf("%d %d",&base,&limit);
    printf("Base is %d \n",base);
    printf("Limit is %d \n",limit);
    for(int i = 1;i<=limit;i++){
      for(int j = 1;j<=base;j = j + 1){
        if((i*j)%5 == 0)
          continue;
        printf("%3d |",i*j);
      }
      printf("\n");
    }
}

```

====================

Program: nosubscript.c
--------------------
```
#include <stdio.h>


int main(){
    int *p;
    int n;
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(int i = 0;i<n;i++){
        scanf("%d",p+i);
    }
    // for(int i = 0;i<10;i++){
    //     p[i] = i;
    // }
    for(int i = 0;i<n;i++){
        printf("%d ",*(p+i));
    }
}
```

====================

Program: numformat.c
--------------------
```
#include <stdio.h>

int main(){
    float x;
    scanf("%5f",&x);
    printf("%0.2f",x);
}
```

====================

Program: numpattercopy.c
--------------------
```
#include <stdio.h>

int main(){
    int numlines;
    printf("Enter the number of lines: ");
    scanf("%d",&numlines);
    for(int i = 1;i <= numlines;i++){
        for(int l = numlines-i;l >0;l--){
            printf(" ");
        }
        for(int j = 1;j <= i;j++){
            printf("%d ",j);
        }
        for(int k = i-1;k >= 1;k--){
            printf("%d ",k);
        }
        printf("\n");
}
}
```

====================

Program: numpattern.c
--------------------
```
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        for(int l = n-i;l >0;l--){
            printf(" ");
        }
        for(int j = 1;j <= i;j++){
            printf("%d ",j);
        }
        for(int k = i-1;k >= 1;k--){
            printf("%d ",k);
        }
        printf("\n");
}
}
```

====================

Program: palindrome.c
--------------------
```
#include <stdio.h>
#include <string.h>

int main(){
    char s;
    scanf("%s",s);
    printf("%c %d",s,10);
    //(strcmp(s,strrev(s)))?printf("Not a palindrome"):printf("palindrome");
}
```

====================

Program: paragraph.c
--------------------
```
#include <stdio.h>


int main(){
    char c[20];
    int i = 0;
    while ((c[i] = getchar()) != '\n')
    {
        i++;
    }
    printf("%s\n",c);
    printf("%d",i);
}

// int main(){
//     char c[100];
//     int i = 0;
//     char l = (char)".";
//     for(char s = getch();s != l;i++)
//     {
//         c[i-1] = s;
//     }
//     printf("%s\n",c);
//     printf("%d",i);
// }
```

====================

Program: Pattern.c
--------------------
```
#include <stdio.h>
#include <math.h>
#define LIMIT 10

int main(){
    for(int i = 1;i <= LIMIT;i++){
        for(int j =0;j <= i;j++){
            //printf("%d %d \n",i,j);
            printf("%d ",abs(i-j)+1);
        }
        printf("\n");
    }
   
}

```

====================

Program: patternside.c
--------------------
```
#include <stdio.h>

int main(){
    for(int i = 1;i <6;i++){
        for(int j = 0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
```

====================

Program: PL2.c
--------------------
```
#include <stdio.h>
#include <string.h>

void sort(int arr[],int size){
    int i,j,temp;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    sort(arr,5);
    int i;
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}


int findShortestString(char arr[][100], int n) {
    int shortestLength = strlen(arr[0]);

    for (int i = 1; i < n; i++) {
        int length = strlen(arr[i]);
        if (length < shortestLength)
            shortestLength = length;
    }

    return shortestLength;
}

int findLongestString(char arr[][100], int n) {
    int longestLength = strlen(arr[0]);

    for (int i = 1; i < n; i++) {
        int length = strlen(arr[i]);
        if (length > longestLength)
            longestLength = length;
    }

    return longestLength;
}

float calculateAverageLength(char arr[][100], int n) {
    int totalLength = 0;

    for (int i = 0; i < n; i++) {
        totalLength += strlen(arr[i]);
    }

    return (float) totalLength / n;
}

int countStringsAboveThreshold(char arr[][100], int n, int threshold) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (strlen(arr[i]) > threshold)
            count++;
    }

    return count;
}

int main() {
    char arr[100][100];
    int n, choice, threshold;

    printf("Enter the number of strings (up to 100): ");
    scanf("%d", &n);
    getchar(); // Clear the newline character from the input buffer

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        fgets(arr[i], sizeof(arr[i]), stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0'; // Remove the trailing newline character
    }

    do {
        printf("\nMenu:\n");
        printf("1. Find the length of the shortest string\n");
        printf("2. Find the length of the longest string\n");
        printf("3. Calculate the average length of all the strings\n");
        printf("4. Count the number of strings with a length greater than a given threshold\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int shortestLength = findShortestString(arr, n);
                printf("Length of the shortest string: %d\n", shortestLength);
                break;
            }
            case 2: {
                int longestLength = findLongestString(arr, n);
                printf("Length of the longest string: %d\n", longestLength);
                break;
            }
            case 3: {
                float averageLength = calculateAverageLength(arr, n);
                printf("Average length of all strings: %.2f\n", averageLength);
                break;
            }
            case 4: {
                printf("Enter the threshold length: ");
                scanf("%d", &threshold);
                int count = countStringsAboveThreshold(arr, n, threshold);
                printf("Number of strings with length greater than %d: %d\n", threshold, count);
                break;
            }
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
```

====================

Program: pointer1.c
--------------------
```
#include <stdio.h>

int main(void)
{
    int x = 4;
    int *ptr = &x;
    printf("%i, %p\n", *ptr, ptr);
    //same as
    // printf("%i, %p\n", x, ptr);
}
```

====================

Program: pointer2.c
--------------------
```
#include <stdio.h>

int main(void)
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10}, sum = 0;
    int *ptr = &array;
    int *p1 = &array[10];
    printf("%d\n", ptr);
    for (ptr; ptr<p1; ptr++)
    {
        printf("%d\n", ptr);
        sum += *ptr;
    }
    printf("The sum is: %i\n", sum);
}
```

====================

Program: pointerarray.c
--------------------
```
#include <stdio.h>

int main(){

    int *p[4];
    int a = 10,b = 20,c = 30,d = 40;


    p[0] = &a;
    p[1] = &b;
    p[2] = &c;                              
    p[3] = &d;
    for(int i = 0;i<4;i++)                  //values
        printf("%d ",*i[p]);
    printf("\n");
    for(int i = 0;i<4;i++)                  //addresses
        printf("%d ",p[i]);             

    //i[p] = p[i] = *(p+i) = *(i+p)
}
```

====================

Program: pointers.c
--------------------
```
#include <stdio.h>

// int main(){
//     int x = 15;
//     int *ptr = &x;
//     printf("%d %d",x,*ptr);
// }

// int main(){
//     float f = 15.0;
//     float* fptr = &f;
//     printf("%f %f",f,*fptr);
// }

// int main(){
//     float f = 25,*fptr = &f;
//     printf("value = %f %f\n",f,*fptr);
//     printf("Address = %d %d",&f,fptr);
// }

int main(){
    int n1[4] = {1,2,3,4},n2;
    int *p1 = &n1;
    int *p2 = &n2;
    for(int i = 0;i<4;i++){
        printf("%d ",n1[i]);    //1 2 3 4
    }
    printf("\n");
     for(int i = 0;i<4;i++){
        printf("%d ",p1[i]);   //1 2 3 4 
    }
    printf("\n");
    //  for(int i = 0;i<4;i++){
    //     printf("%d",*p1[i]);
    // }
    printf("%d\n",*p1); //1
    printf("%d\n",p2); //memory address
    printf("%d %d\n",*p1,*(p1+1)); //first and second element

    for (int i = 0;i<4;i++){
        printf("%d ",*(p1+i));
    }
    printf("\n");
    int sum = 0;
    for(int i = 0;i<4;i++){
        sum += *(p1+i);
    }
    printf("%d\n",sum);
}
```

====================

Program: pointers0206.c
--------------------
```
#include <stdio.h>

int add(int arr[4],int n){
    int *ptr = arr;
    for(int i; i<4;i++){
        *(ptr+i) += n;
    }
    for(int i = 0;i<4;i++){
        printf("%d ",*(ptr+i));
    }
}

int addptr(int *ptr,int n){
    for(int i; i<4;i++){
        *(ptr+i) += n;
    }
    for(int i = 0;i<4;i++){
        printf("%d ",*(ptr+i));
    }
}


int main(){
    int arr[4] = {1,2,3,4};
    int *aptr = arr;
    add(arr,2);
    printf("\n");
    addptr(aptr,3);
    
    // for(int i = 0;i<4;i++){
    //     printf("%d ",arr[i]);
    // }
}
```

====================

Program: pointertoarray.c
--------------------
```
#include <stdio.h>

int main(){
    int mat[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int (*p)[4];
    p = mat;

    //p = 1st element of 1st row, p+1 is 1st element of second row
    printf("%d %d\n",*(*p),*(*(p+1)));


    //need 2 stars to access value
    printf("%d %d %d\n",p,*p,**p); //6422236 6422236 1
    
    

    for(int j = 0;j<4;j++){
    for(int i = 0;i<3;i++){
        printf("%d ",*(*(p+i)+j));      //traversing with arithmetic
    }
    printf("\n");
    }

    

    for(int j = 0;j<4;j++){
    for(int i = 0;i<3;i++){
        printf("%d ",*(p[i]+j));        //traversing with subscript
    }
    printf("\n");
    }

    // *(*(p+i)+j) goes to ith row and jth column
}
```

====================

Program: problem.c
--------------------
```
#include <stdio.h>

int main(){
    char str[100];
    fgets
}
```

====================

Program: Realloc.c
--------------------
```
#include <stdio.h>


int main(){
    int *p;
    int n;
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(int i = 0;i<n;i++){
        scanf("%d",&p[i]);
    }
    // for(int i = 0;i<10;i++){
    //     p[i] = i;
    // }
    for(int i = 0;i<n;i++){
        printf("%d ",p[i]);
    }
    int *f = p;
    f = (int *)realloc(f,sizeof(int)*(n+2));
    for(int i = 0;i<n+2;i++){
        printf("%d ",p[i]);
    }
    f = (int *)realloc(f,sizeof(int)*(n-2));
    for(int i = 0;i<n+2;i++){
        printf("%d ",p[i]);
    }
}
```

====================

Program: Rownum.c
--------------------
```
int main(){
    int arr[3][3];
    int x,y;
    printf("Enter row and column of element:\n");
    scanf("%d%d",&x,&y);
    int mem = &arr;
    printf("Address of array is: %d\n",mem);
    int elempos = mem + 3*4*(x-1) + 4*(y-1);
    printf("Address of element is: %d\n",elempos);
}

```

====================

Program: scopetest.c
--------------------
```
#include <stdio.h>





int main(){
    extern int i;
    test();
    printf("%d\n",i);
    test();
}
int i;
void test(){
    i = i+1;
    printf("%d\n",i);
}
```

====================

Program: singlechar.c
--------------------
```
#include <stdio.h>

int main(){
    char c;
    scanf("%c",&c);
    printf("%c",c);
}
```

====================

Program: stack.c
--------------------
```
#include <stdio.h>

void c(int i){
    printf("%d\n",i);
}

void b(){
    int i = 5;
    c(i);
    i = 6;
    c(i);
}
void a(){
    int i = 2;
    b();
}
int main(){
    int i =0;
    a();
}
```

====================

Program: stringcopy.c
--------------------
```
#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    scanf("%s",s);
    char t[50];
    strcpy(t,s);
    printf("%s\n",t);

}
```

====================

Program: Structures2905.c
--------------------
```
#include <stdio.h>
#include <string.h>

struct Student{
    char name[50],rollno[6],phno[10];
    int age;
    float marks[5];
}memname = {"Raghav","22Z261","6385786223",18,{100,100,100,100,100}};



struct Employee{
    char name[50];
    float height;
    int age;
};

void insertMember(char name[50],float height,int age,char s[50]){
    struct Employee s = {name,height,age};
}

void printMember(struct Employee memname){
    printf("%s\n",memname.name);
    printf("%f\n",memname.height);
    printf("%d\n",memname.age);
}
int main(){
    struct Employee s;
    insertMember("Raghav",5.8,18,s);
    printMember(s);
}

struct student{char name[30]; float marks;};
    struct student s[3]={{.name = 'a',.marks = 30.0},{'b',.marks = 20},{'c',.marks = 30}};

int values(){
   for(int i=0;i<3;i++){
     extern struct student s[3];
      printf("the name of the student is %s\n",s[i].name);
      printf("the marks of the student is %f\n",s[i].marks);
    }
}

int avg(){
  extern struct student s[3];
   int avgmarks=0;
    for(int i=0;i<3;i++){
      avgmarks=avgmarks+s[i].marks;
    }
    avgmarks=avgmarks/3;
    printf("the average marks of the students is %d",avgmarks);
}

int main(){
  values();
  avg();
}



```

====================

Program: submatrices.c
--------------------
```
#include <stdio.h>

int main(){
    int matrix[4][4] = {1,0,0,1,0,1,1,0,1,1,1,1,1,0,0,1};
    //printing matrix
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            if(matrix[i][j] == 1){
                int row = 0,column = 0;
                //finding number of square matrices
                do{
                    row++;
                    column++;
                }
                while(matrix[i+row][j+column] == 1 && matrix[i+row][j] == 1 && matrix[i][j+column] == 1);
                //printing submatrix position
                //int sub[row][column];
                if(row != 1 && column != 1)
                {
                    printf(" Square Submatrix of %d rows and %d columns found at (%d,%d)\n",row,column,j+1,i+1);
                }
                //pritning column subs
                row = 0;
                column = 0;
                do{
                    row++;
                }
                while(matrix[i+row][j] == 1 && matrix[i][j+column] == 0);
                //printing position
                if(row != 1)
                {
                    printf("Column Submatrix of %d rows and %d columns found at (%d,%d)\n",row,column,j+1,i+1);
                }
                //pritning row subs
                row = 0;
                column = 0;
                do{
                    column++;
                }
                while(matrix[i+row][j] == 0 && matrix[i][j+column] == 1);
                //printing position
                if(column != 1)
                {
                    printf("Row Submatrix of %d rows and %d columns found at (%d,%d)\n",row,column,j+1,i+1);
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
```

====================

Program: subscript.c
--------------------
```
#include <stdio.h>


int main(){
    int *p;
    int n;
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(int i = 0;i<n;i++){
        scanf("%d",&p[i]);
    }
    // for(int i = 0;i<10;i++){
    //     p[i] = i;
    // }
    for(int i = 0;i<n;i++){
        printf("%d ",p[i]);
    }
}
```

====================

Program: sumdigits.c
--------------------
```
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
```

====================

Program: summat.c
--------------------
```
#include <stdio.h>

int main(){
    int mat[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int (*p)[4];
    p = mat;

    int sum = 0;
    for(int j = 0;j<4;j++){
    for(int i = 0;i<3;i++){
        sum += *(p[i]+j);        //traversing with subscript
    }
    }
    printf("%d",sum);
}
```

====================

Program: Swap.c
--------------------
```
#include <stdio.h>

int main(){
    int size;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0;i<size;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int a;
    
    for(int i = 0;i<size-1;i=i+2){
        a = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = a;
    }
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
```

====================

Program: tempCodeRunnerFile.c
--------------------
```
#include <stdio.h>

// char* spnum(int a){
//     int s1 = 0,s2 = 0;
//     s1 = a%10;
//     for(int i = 0;i<2;i++){
//         a = a/10;
//         s2 += a%10;
//     }
//     if(s1 == s2)
//         return "This is a Special Number";
//     else
//         return "This is not a Special Number";
    
// }
// int factors(int arr[],int num){
//     for(int i = 0;i<sizeof(arr)/sizeof(int);i++){
//         if(num%arr[i] == 0){
//             printf("%d %d\n",sizeof(arr),arr[i]);
//             return 1;
//         }
           
//     }
//     return 0;
// }

```

====================

Program: ternaryops.c
--------------------
```
#include <stdio.h>

// int main(){
//     int n;
//     printf("Enter a number:\n ");
//     scanf("%d",&n);
//     printf("%s",(n%2 == 0) ? "even" : "odd");
    
// }

// int main(){
//     int n1,n2,n3;
//     printf("Enter three numbers:\n ");
//     scanf("%d %d %d",&n1,&n2,&n3);
//     (n1>n2)?((n1>n3)?printf("%d",n1):(n2>n3)?printf("%d",n2):printf("%d",n3)):(n2>n3)?printf("%d",n2):printf("%d",n3);
// }

//left/right shift
// int main(){
//     int a = 5;
//     printf("%d %d",2==2,15>>3);
// }

//input specifiers
int main(){
    char str[100];
    scanf("%[^+ ^ ^- ^/ ^*]",str);
    printf("%s",str);
}
```

====================

Program: voworcon.c
--------------------
```
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
```

====================

<font size = 4>
Sreeraghavan R

22Z261
</font>
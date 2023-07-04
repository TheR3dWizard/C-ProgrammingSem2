C Programming

Basics of c

```
#include <stdio.h>

int main(){
  int x=10;
  int y=7;
  printf("%d %d" ,x,y);
}

int main(){
  char s[10];
  printf("enter the first text:");
  scanf("%s",&s);
  char  k[10];
  printf("enter the second text:");
  scanf("%s",&k);
  char l[10];
  printf("etnter the third text:");
  scanf("%s",&l);
  
}


```
Introduction to loops
```
#include <stdio.h>

int main()
{
    int f1=0,f2=1,f3,i=3,len;
    printf("enter length of the  fibonacci series:");
    scanf("%d",&len);
    printf("%d\n%d\n",f1,f2);
    while(i<=len)           
    {
        f3=f1+f2;                
        printf("%d\n",f3);      
        f1=f2;
        f2=f3;
        i=i+1;                  
    }
    return 0;
}

#include <stdio.h>

```
Introduction to datatypes
```
  #include <stdio.h>
 int main(){
  
  double i,p=1;
  for (i=0;i<=100;i=i+1){
    p=p*2;
    printf("%lf\n",p);
  }
}

MUltiplication table
int main(){
  int n=0,i,j,k=0;
  printf("enter how many times the number is to be multiplied is to be displayed");
  scanf("%d",&i);
  for(j=0;j<=i;j=j+1){
    for(k=0;k<=5;k=k+1){
      if(k%5!=0){
        if(j%5!=0){
      printf("%d x %d = %d ",k,j,k*j);
        }
      }
    }
    
    
    printf("\n");

    
  }
  return 0;
 
 }

 Introduction to for loop
 #include <stdio.h>
int main(){
    int i;
    for(i=0;i<=6;i=i+1){
        printf("%d",i);

    }
}

Itroduction to if else

int main(){
int i;
for(i=0;i<=50;i=i+1){
  if(i%5!=0){
    printf("%d ",i);
  }
}
}
Printing different patterns
1.
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}
2.
int main() {
   int i, space, rows, k = 0, count = 0, count1 = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1) {
         if (count <= rows - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
}

int main(){
  int lab[5],loop;
  lab[0]=23;
  lab[1]=2;
  lab[2]=56;
  lab[3]=4;
  lab[4]=12;
  for(loop=0;loop<5;loop=loop+1){
    printf("%d  ",lab[loop]);
  }
}

Introduction to arrays
1. one dimensional array

int main(){
  int arr[10],sum=0,i=0,f;
  for(i=0;i<10;i++){
    scanf("%d",&arr[i]);
  }
  for(i=0;i<10;i++){
    sum=sum+arr[i];
  }
 printf("%d\n",sum);
 printf("%d",sum/i);
}
for(i=0;i<9;i=i+2){
  f=arr[i];
  arr[i]=arr[i+1];
  arr[i+1]=f;
}

for(i=0;i<10;i++){
  printf("%d ",arr[i]);
}


int a[12]={1,2};
printf("%d",a[1]);
printf("%d",a[10]);
printf("%d",a[15]);

2.two dimensional arrays

  int mat[2][3]={{11,12,13},{14,15,16}};
  int max[2][3]={{11,12,},{14,16,}};
  int man[2][3]={11,12,13};
  int mach[2][3];
  int i,j;
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      scanf("%d  ",&mach[i][j]);
    }
    
      }
  
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
    printf("%d ",mach[i][j]);
      }
    printf("\n");
  }

  int mach[3][2];
  int i,j,sum=0;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      scanf("%d",&mach[i][j]);
    }
    
      }
  
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("%d ",mach[i][j]);
      }
    printf("\n");
  }
 for(i=0;i<3;i++){
    for(j=0;j<2;j++){
      sum=sum+mach[i][j];
    }
 }
  printf("%d",sum);
   for(i=0;i<3;i++){
    for(j=i;j<3;j++){
    printf("%d ",mach[i][j]);
      }
    printf("\n  ");
  }
  


DAY7
Introduction to switch case


#include <stdio.h>
  int main() {
    int a,b,result; 
    char c;
    do{printf("\n name the function u want to perform   ");
    char c=getchar();
    printf("enter the two numbers  ");
    scanf("%d %d",&a,&b);
    switch(c){
      case 'a':
        result=a+b;
      break;
      
      case 's':
        result=a-b;
        break;
      
    case 'm':
      result=a*b;
      break;
    
    case 'd':
      result=a/b;
      break;
     
    
    }
    printf("%d", result);
     }
     while(c!='e');
  }

//check if its a unit matrix

#include<stdio.h>
int main(){
 int arr[4][4]={{1,0,1,0},{1,1,1,0},{0,0,1,1},{1,0,0,0}};
 int i,j;
  for(i=0;i<4;i=i+1){
    for(j=0;j<4;j=j+1){
      if(arr[i][j]==1){
        if(arr[i+1][j]==1 || arr[i][j+1]){}
      }
      
    }
  }
}
//Operations with character variables

#include <stdio.h>

int main(){
    char c;
    scanf("%c",&c);
    printf("%c",c);

  
day8
//sum of the digits of a number

#include <stdio.h>
int main(){
 int n=23,sum=0;
  while(n>0){
    sum=sum+n%10;
    n=n/10;
  
  }
  printf("%d",sum);
}
/}

// count the number of vowels and consonants

int main(){
    char ch;
    scanf("%c",&ch);
    char vowels[5] = {'a','e','i','o','u'};
    int vowel = 0,consonant = 0;
    for(int i = 0;i<5;i++){
        (ch == vowels[i])?vowel++:consonant++;
    }
    (vowel != 0)?printf("Vowel"):printf("Consonant");
}



```
Introduction to ternary operators

find max between two numbers
```
#include<stdio.h>
int main(){
  printf("enter the numbers");
  int n1,n2;
  scanf("%d %d",&n1,&n2);
  int max=(n1>n2)?n1:n2;
  printf("%d",max);
}

//print if the number is even or odd

int main(){
  printf("enter the number  ");
  int n1;
  scanf("%d",&n1);
  (n1%2==0)?printf("even"):printf("odd");
  
 } 

 //find max between three numbers:

int main(){
  printf("enter the numbers ");
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int max=(a>b && a>c)?a:(b>a && b>c)?b:c;
  printf("%d",max);
}
int main(){
  char a=5,b=6;
  printf("%d\n",~a);
  printf("%d",a|b);u
}

//bitshift operators
int main(){
  int x=15;
  printf("%d %d",15>>3,15<<3);
}

// Introduction to string operators

int main(){
  char x[10];
  scanf("%[^+ ^- ^/ ^* ^% ]",x);
  printf("%s",x);
}


#include <string.h>
int main(){
  char c[10];
  scanf("%s",c);
  int y;
  y=strlen(c);
  printf("%d",y);
}


int main(){    
  int n,q,r,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        q=n/10;
        n=q;
        sum=sum+r;
    }
    printf("%d",sum);
}

// Introduction to functions
 
int main() {
   int num1, num2, res;
 
   printf("\nEnter the two numbers : ");
   scanf("%d %d", &num1, &num2);
 
   //Call Function Sum With Two Parameters
   res = sum(num1, num2);
 
   printf("nAddition of two number is :%d ",res);
   return (0);
}
 
int sum(int num1, int num2) {
   int num3;
   num3 = num1 + num2;
   return (num3);
}
```
List of Prime numbers
```
int isfactor(int n,int x){
  if(n%x==0)
    return(1);
  else
   return(0);
}
int isprime(int n){
  int factors=0;
  for(int i=2;i<n/2+1;i++){
    if(n%i==0)
      factors+=1;
    else
      continue;
  }
  return(factors);
}
int factornum(int n){
  printf("\nthe factors are:");
  for(int i=1;i<=n;i++){
    if(n%i==0){
      printf("\n%d",i);
    }
  }
}
int main(){
  int n,x,factor,factors;
  printf("enter the number and the number to be checked:");
  scanf("%d %d",&n,&x);
  factor=isfactor(n,x);
  if(factor==1)
    printf("%d is a factor of %d",x,n);
  else
    printf("%d is not factor of %d",x,n);
  factors=isprime(n);
  if(factors>1)
    printf("\n%d is not a prime number",n);
  else
    printf("\n%d is a prime number",n);
  factornum(n);
  
}

int factorrange(){
  int a,b;
  printf("enter the starting and the ending range:");
  scanf("%d %d",&a,&b);
  printf("The prime numbers in the given range are:");
  for(int i=a;i<b;i++){
    int res;
    res=isprime(i);
    if(res<1)
      printf("\n%d",i);
    else
      continue;
  }
}

//passing an array to a function

 int arr(int array[], int n) {
  int i;
  for (i = 0; i < n; i++)
    printf("%d ", array[i]);
}
int main() {
  int n = 4;
  int arr1[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
  }
  arr(arr1, 4);
}
```

```
//passing 2d arrays into a function

#include <stdio.h>

int arr(int array[][3], int n,int k) {
  int i,j;
  for (i = 0; i < n; i++){
    for(j=0;j<k;j++)
    printf("%d ", array[i][j]);
    printf("\n");
  }
  
}
int main() {
  int n = 4,k=3;
  int arr1[n][k];
  for(int i=0;i<n;i++){
    for(int j=0;j<k;j++){
    scanf("%d",&arr1[i][j]);
    }
  }
  arr(arr1,4,3);
}

int arr(int array[], int n) {
  int i;
  for (i = 0; i < n; i++)
    printf("%d ", array[i]);
}
int sort(int array[],int n){
  int i,j,temp;
  for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
      if(array[j]>array[j+1]){
        temp=array[j+1];
        array[j+1]=array[j];
        array[j]=temp;
      }
    }
  }
}
int main() {
  int n = 4;
  int arr1[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
  }
  sort(arr1, 4);
  arr(arr1, 4);
  
}

//Introduction to structures

 #include <string.h>
struct student{char name[30]; char rollno[10];int phnumber;float marks;};

int main() {
  struct student s;
  strcpy(s.name,"anand");
  strcpy(s.rollno,"22z209");
  s.phnumber=568964356;
  s.marks=69.696970;
  printf("%s,%s,%d,%f",s.name,s.rollno,s.phnumber,s.marks);
}
struct student{char name[30]; char rollno[10];int phnumber;float marks;};


//introduction to data storage classes

void test(){
  extern int i;
  i=i+1;
  printf("%d\n",i);
}
int i=10;
int main(){
  
  test();
  printf("%d\n",i);
  test();
  }

int main(){
char name[10],named[10];
strcpy(name,"keerthi");
  strcpy(named,name);
  printf("%s",named);
}

#include<stdio.h>
struct student{char name[30]; char rollno[10];};
int main(){
  struct student s[3]={{"keerthi","22z243"},{"anand","22z209"},          {"sreeraghavan","22z261"}};
  printf("%s  %s ",s[1].name,s[1].rollno);
  printf("%s  %s ",s[0].name,s[0].rollno);
  printf("%s  %s",s[2].name,s[2].rollno);

          
}


struct student{char name[30]; float marks;};
    struct student s[3]={{.name = 'a',.marks = 30.0},{'b',.marks = 20},{'c',.marks = 30}};
    //printf("%f",s[0].marks);
int values(){
   for(int i=0;i<3;i++){
     extern struct student s[3];
      printf("the name of the student is %s\n",s[i].name);
      printf("the marks of the student is %f\n",s[i].marks);
    }
}
//find the avg marks
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

//Introduction to pointers

#include <stdio.h>
int main(){
  float x=75;
  float *ptr=&x;
  printf("the value of x is %f\n",x);
  printf("the value of x is %f\n",*ptr);
  printf("the address of x is %p\n",&x);
  printf("the address of x is %p\n",ptr);
  printf("the address of x is %d\n",ptr);
}
int main(){
int n1[]={1,2,13,14},n2=8;
int *p1=n1;
int *p2=&n2;
for(int i=0;i<4;i++){
  printf("%p\n",p1+i);
  printf("%d\n",n1[i]);
}
  printf("%d\n",*p2);
  printf("%p\n",p2);
}

//using the concept of pointers find the sum of the elements in the array.
1.
int main(){
int n1[]={1,2,13,14},n2=8,sum=0;
int *p1=n1;
int *p2=&n2;
for(int i=0;i<4;i++){
  printf("the address is %p\n",p1+i);
  printf("the value is %d\n",*(p1+i));
  sum=sum+*(p1+i);
}
  printf("the sum of elements is %d\n",sum);
  printf("%d\n",*p2);
  printf("%p\n",p2);
}
//adress of array elements

int main(){
  char *s="hello\n";
  printf("%s",s);
  printf("%p\n",*s);

  int *k[]={1,2,3};
  for(int i=0;i<3;i++){
    printf("%p\n",(k+i));
    printf("%d\n",*(k+i));
  }
  
}

//pointers to functions

int add(int *ptr){
  for(int i=0;i<4;i++){
    *(ptr+i)=*(ptr+i)+1;
    printf("%d\n",*(ptr+i));
    printf("%p\n",(ptr+i));
    
  }
}
int main(){
  int arr[]={1,2,3,4};
  int *arrptr = arr;
  add(arrptr);
  for(int i = 0;i<4;i++){
    printf("%d ",arr[i]);
  }
}


int add(int arr[]){
  int *ptr=arr;
  for(int i=0;i<sizeof(arr);i++){
    *(ptr+i)=*(ptr+i)+1;
    printf("%d\n",*(ptr+i));
    printf("%p\n",(ptr+i));
    
  }
}


int main(){
  int arr[]={1,2,3,4};
  add(arr);
}


int swap(int *ptr){
  for(int i=0;i<4;i=i+2){
    int a=*(ptr+i+1);
    *(ptr+i+1)=*(ptr+i);
    *(ptr+i)=a;
  }
}


int main(){
  int n1[]={1,2,3,4};
  int *p1=n1;
  swap(p1);
  for(int i=0;i<4;i++){
    printf("%d",*(p1+i));
  }
}

void swapcolumns(int *matrix, int rows, int columns, int col1, int col2) {
    int i;
    int *ptr1, *ptr2;
    
    for (i = 0; i < rows; i++) {
        ptr1 = matrix + i * columns + col1;
        ptr2 = matrix + i * columns + col2;
        
        // Swap values using temporary variable
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
}

int main(){
  int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  printf("enter the column numbers to be swapped");
  int c1,c2;
  int *p1,*p2;
  scanf("%d %d",&c1,&c2);
  swapcolumns(mat,3,3,c1,c2);
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        printf("%d",mat[i][j]);
      }
      printf("\n");
    }
  }
```

```
//memory allocation
#include <stdio.h>
int main(){
 int *p;
  p =(int*)malloc(10*sizeof(int));
  for(int i=0;i<10;i++){
    scanf("%d", (p+i));
  }
  for(int i=0;i<10;i++){
    printf("%d", *(p+i));
  }
 
}

int main(){
 int *p;
  p =(int*)malloc(6*sizeof(int));
  for(int i=0;i<6;i++){
    scanf("%d", &p[i]);
  }
  for(int i=0;i<10;i++){
    printf("%d\n", *(p+i));
    printf("%p\n",p+i);
  }
 
}

int main(){
 int *p;
  p =(int*)calloc(6*sizeof(int));
  for(int i=0;i<6;i++){
    scanf("%d", &p[i]);
  }
  for(int i=0;i<10;i++){
    printf("%d\n", *(p+i));
    printf("%p\n",p+i);
  }
 
}
int main(){
 int *p,*ptr;
  p =(int*)malloc(6*sizeof(int));
  ptr= (int *)realloc(p, sizeof(int)*3);
  for(int i=0;i<6;i++){
    scanf("%d", &p[i]);
  }
  for(int i=0;i<10;i++){
    printf("%d\n", *(p+i));
    printf("%p\n",p+i);
  }

int main(){
  int mat[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  int (*p)[4];//pointer to an array of 4 integers
  int *q[4];//array of 4 pointers to integers
 }
  create a simple integer array of four pointers
 int main(){ int *p[4];
  int a=10,b=20,c=30,d=40;
  p[0]=&a;
  p[1]=&b;
  p[2]=&c;
  p[3]=&d;
  for(int i=0;i<4;i++){
    printf("%d\n",p[i]);
    printf("%d\n",*p[i]);
  }
}
//create a  two dimensional array and initialize it and create a pointer to it and print the values of the array using the pointer
#include<stdio.h>
int main(){
  int mat[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  int (*p)[4];
  p=mat;
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      printf("%d",*(*(p+i)+j));
    }
     printf("\n");
  }
 
}


```

<font size = 4>
O Keerthi

22Z243
</font>
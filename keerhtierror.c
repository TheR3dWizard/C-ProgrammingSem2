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
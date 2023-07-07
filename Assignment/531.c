#include<Stdio.h> void main(){
int x,n;
printf("enter the value of x and n:"); scanf("%d%d",&x,&n);
int result=power(x,n);
printf("the result is %d",result);
}
int power(int x,int n){ if(n==0){
return 1; }
else{
return x*power(x,n-1);
} }
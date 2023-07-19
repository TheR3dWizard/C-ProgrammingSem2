//Structures : Address,Student (Address is in student),point(longitude and longitutde)
//Functions: get_student

#include <stdio.h>
#include <string.h>


struct student{
    char name[50],rollno[50];
    struct address{
    int doorno;
    char strn[50];
}a;
}arr[100];


void get_student(struct student arr[],int n){
    printf("Enter details:\n");
    scanf("%s %s %d %s",arr[n].name,arr[n].rollno,&arr[n].a.doorno,arr[n].a.strn);
}


void print_student(struct student arr[],int n){
    printf("Name = %s\nRollno = %s\nDoorno = %d\nStreet Name = %s\n",arr[n].name,arr[n].rollno,arr[n].a.doorno,arr[n].a.strn);
}


int main(){;
    get_student(arr,0);
    print_student(arr,0);
}

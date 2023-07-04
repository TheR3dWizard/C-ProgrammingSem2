//Structures : Address,Student (Address is in student),point(longitude and longitutde)
//Functions: get_student

#include <stdio.h>
#include <string.h>


struct address{
    int doorno,pincode;
    char strn[50],city[50];
};

struct student{
    char name[50],rollno[50];
    struct address a; 
};

void get_student(struct student s){
    printf("Enter ");
    scanf("%s",&s.name);
    printf("\n");
    printf("Enter ");
    scanf("%s",&s.rollno);
    printf("\n");
    printf("Enter ");
    scanf("%d",&s.a.doorno);
    printf("\n");
    printf("Enter ");
    scanf("%s",&s.a.pincode);
    printf("\nEnter strname");
    scanf("%s",&s.a.strn);
    printf("Enter ");
    scanf("%s",&s.a.city);
    printf("\n");
    printf("Name = %s\nRollno = %s\nDoorno = %d\nPincode = %d\nStreet Name = %s\nCity = %s\n",s.name,s.rollno,s.a.doorno,s.a.pincode,s.a.strn,s.a.city);
}


void print_student(struct student s){
    printf("Name = %s\nRollno = %s\nDoorno = %d\nPincode = %d\nStreet Name = %s\nCity = %s\n",s.name,s.rollno,s.a.doorno,s.a.pincode,s.a.strn,s.a.city);
}

int main(){
    struct student s;
    get_student(s);
    printf(" TEST %s \n",s.name);
    print_student(s);
}

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




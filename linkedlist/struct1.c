#include<stdio.h>
struct Employee
{
    char name[50];
    int age;
    float salary;
};

int main(){
    struct Employee emp;
    printf("Enter Emp Details:\n");
    printf("Name : ");
    scanf("%s",&emp.name);
    printf("age : ");
    scanf("%d",&emp.age);
    printf("Salary : ");
    scanf("%f",&emp.salary);



    printf("Emp name %s\n",emp.name);
    printf("Emp Age %d\n",emp.age);
    printf("Emp Salary %.2f\n",emp.salary);
}
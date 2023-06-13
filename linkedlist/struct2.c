#include<stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main(){
    struct Student std[5];
    for(int i = 0; i<5;i++){
        printf("Enter name %d\n",i+1);
        scanf("%s",&std[i].name);
        printf("Enter roll no %d\n",i+1);
        scanf("%d",&std[i].roll);
        printf("Enter marks %d\n",i+1);
        scanf("%f",&std[i].marks);
    }
    for(int i = 0; i<5;i++){
        printf("Enter name %d  ",i+1);
        printf("%s\n",std[i].name);
        printf("Enter roll no %d  ",i+1);
        printf("%d\n",std[i].roll);
        printf("Enter marks %d  ",i+1);
        printf("%f\n",std[i].marks);
    }

}
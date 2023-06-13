#include<stdio.h>
int main(){
    int var = 789;
    int* p1;
    int** p2;

    p1 = &var;
    p2 = &p1;
    printf("%d\n",var);
    printf("%d\n",p1);
    printf("%d\n",*p1);
    printf("%d\n",p2);
    printf("%d\n",*p2);
    printf("%d\n",**p2);
}
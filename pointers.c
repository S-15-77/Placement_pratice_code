#include<stdio.h>
void main(){
    int i = 3;
    printf("Variable address: %d\n",&i);
    printf("Variable Value: %d\n",*(&i));
    printf("Variable Value: %d\n",i);
}
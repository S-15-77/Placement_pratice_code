#include<stdio.h>
int main(){
    int num,sum;
    scanf("%d",&num);
    if(num%2 == 0){
        sum = (num/2) * (1+num);
    }
    else{
        sum = ((num/2)+1) * (num);
    }
    printf("%d",sum);
}
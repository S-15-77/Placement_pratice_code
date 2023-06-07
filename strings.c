#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    scanf("%s",&s1);
    scanf("%s",&s2);
    if(!strcmp(s1,s2)){
        printf("%s is same as %s",s1,s2);
    }
    else{
        printf("%s is not same as %s",s1,s2);
    }
}
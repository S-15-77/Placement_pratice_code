#include<stdio.h>
int main(){
    char* str = "Hello";
    char* ptr;
    ptr = str;
    int length = 0;
    while(*ptr != '\0'){
        length++;
        ptr++;
    }

    printf("%d",length);
    return 0;
}
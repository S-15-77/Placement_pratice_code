#include<stdio.h>
#include <stdlib.h>
void main(){
    int* arr = (int*)malloc(5 * sizeof(int));
    printf("Enter 5 integer: ");
    for(int i=0;i<5;i++){
        scanf("%d",(arr+i));
    }
    int* smallest = arr;
    for(int j = 0;j<5;j++){
        if(*(arr+j) < *smallest){
            smallest = (arr + j);
        }
    }
    printf("The smallest element is %d",*smallest);
    free(arr);
}
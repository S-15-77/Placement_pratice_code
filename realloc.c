#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n,i;

    printf("Enter number of elements:");
    scanf("%d",&n);

    ptr = (int*)malloc(n * sizeof(int));
    printf("MALLOC : %u\n",ptr);
    if(ptr == NULL){
        printf("Memory is not allocated\n");
        exit(0);
    }
    else{
        //Get the elements of the array
        for(i=0;i<n;++i){
            ptr[i] = i+1;
        }
        //print the elements of the array
        printf("The elements of the array are:\n");
        for (i=0;i<n;++i){
            printf("%d",ptr[i]);
        }
    }
    n = 10;
    ptr = realloc(ptr,n*sizeof(int));
    printf("Memory successfully allocated using realloc\n");
    printf("REALLOC : %u\n",ptr);
    if(ptr == NULL){
        printf("Memory is not allocated\n");
        exit(0);
    }
    else{
        //Get the elements of the array
        for(i=5;i<n;++i){
            ptr[i] = i+1;
        }
        //print the elements of the array
        printf("The elements of the array are:\n");
        for (i=0;i<n;++i){
            printf("%d",ptr[i]);
        }
    }
    free(ptr);
}
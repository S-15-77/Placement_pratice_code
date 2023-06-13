#include<stdio.h>
int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int* ptr;
    int size = sizeof(arr)/sizeof(arr[0]);
    ptr = arr;
    for(int i = size - 1;i>=0;i--){
        printf("%d ",*(ptr + i));
    }
    return 0 ;
}
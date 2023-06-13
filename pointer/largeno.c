#include<stdio.h>
int main()
{
    int arr[] = {7,8,1,0,5,6};
    int* ptr;
    ptr = arr;
    int max = *ptr;
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(max < *(ptr+1)){
            max = *(ptr+1);
            ptr++;
        }
    }
    printf("%d",max);
    return 0;
}
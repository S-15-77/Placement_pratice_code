#include<stdio.h>
int main(){
    float arr[] = {10,20,30,40};
    float* ptr;
    ptr = arr;
    float sum;
    float avg;
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        sum += *ptr;
        ptr++;
    }
    avg = sum/(sizeof(arr)/sizeof(int));
    printf("%.2f",avg);
    return 0;
}
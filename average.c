#include <stdio.h>
void main(){
    int num[10];
    for (int i = 0;i<10;i++)
        scanf("%d",&num[i]);
    
    int sum = 0;
    for(int j=0;j<10;j++)
        sum = sum + num[j];
    
    float avg = (float)sum / 10;
    printf("\nAVG: %.2f",avg);
}
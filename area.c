#include<stdio.h>
#define PI 3.14
void areaperi(int,float *,float*);

int main(){
    int radius;
    float area,perimeter;
    scanf("%d",&radius);
    areaperi(radius,&area,&perimeter);
    printf("Area = %f\n",area);
    printf("Perimeter %f\n",perimeter);
}

void areaperi(int r,float *a,float *p){
    *p = 2 * PI * r; 
    printf("*p : %d\n",p);
    *a = PI * r * r; 
}

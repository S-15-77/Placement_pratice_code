#include <stdio.h>
void main(){
    int num1,num2;
    float n1,n2;
    scanf("%d %d",&num1,&num2);
    scanf("%f %f",&n1,&n2);
    printf("%d %d\n",(num1 + num2),(num1 - num2));
    printf("%.1f %.1f\n",(n1 + n2),(n1 - n2));
}
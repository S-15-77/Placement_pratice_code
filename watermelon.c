#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(num % 2 != 0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
        int x = num / 2;
        if(x % 2 == 0){
            
            printf("%d %d",x,x);
        }
        else{
            int n1,n2;
            n1 = x+1;
            n2 = x-1;
            printf("%d %d",n1,n2);
        }
    }
}
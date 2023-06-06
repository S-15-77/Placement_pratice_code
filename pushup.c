#include<stdio.h>
int main(){
    int p[4],count = 0;
    for(int i =0;i<4;i++){
        scanf("%d",&p[i]);
    }
    for(int i=0;i<4;i++){
        if(p[i]>20){
            count++;
        }
    }
    printf("%d",count);
}
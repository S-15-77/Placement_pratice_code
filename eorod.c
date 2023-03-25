#include <stdio.h>
void main(){
    int val[15];
    for(int i =0; i<15;i++){
        scanf("%d",&val[i]);
    } 
    for(int j=0;j<15;j++){
        if(val[j] % 2 == 0){
            printf("Even\n");
        }
        else{
            printf('Odd\n');
        }
    }
}
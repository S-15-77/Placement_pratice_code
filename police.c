#include <stdio.h>
#include <stdlib.h>
int main(){
    int cr;
    int police = 0;
    int unsolved = 0;
    printf("Enter the no of crimes:");
    scanf("%d\n",&cr);
    int num;
    int *arr = (int*) malloc(cr * sizeof(int));

    for (int i = 0;i < cr ;i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0;i < cr;i++){
        if(arr[i] == -1){
            if(police >0){
                police--; 
                // printf("%d",police);
            }
            else{
                unsolved++;
            }
        }
        else{
            police = police + arr[i];
        }
    }
    printf("No of Unsolved: %d",unsolved);
}
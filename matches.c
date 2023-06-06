#include<stdio.h>
int calSum(int sum);
int main(){
    int t;
    printf("Enter the Testcase:");
    scanf("%d",&t);
    int a =t;
    int arr[t];
    while(t--){
        int a,b,sum;
        printf("Enter 2 Number:");
        scanf("%d %d",&a,&b);
        sum = a+b;
        calSum(sum);
    }
    
}

int calSum(int sum){
    int matches[] = {6,2,5,5,4,5,6,3,7,6};
    int count = 0;
    if(sum == 0){
       return matches[0]; 
    }
    while(sum > 0){
        int ones = sum % 10;
        count += matches[ones];
        sum = sum/10;
    }
    // printf("%d\n",count);
    return count;
}
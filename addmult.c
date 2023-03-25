#include<stdio.h>
int addmult(int i,int j);
int main(){
    int i = 3,j=4,k,l;
    k ,l = addmult(i,j);
    // l = addmult(i,j);
    printf("%d %d \n",k,l);
    return 0;
}

int addmult(int ii,int jj){
    int kk,ll;
    kk = ii+jj;
    ll = ii*jj;
    return(kk,ll);
}
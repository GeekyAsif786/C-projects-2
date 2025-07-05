#include<stdio.h>
int power(int m, int n){
    if(n==0){
        return 1;
    }
        int s=m*power(m,n-1);
        return s;
}



int main(){
    int m,n;
    printf("enter the base:\n");
    scanf("%d",&m);
    printf("enter the power:\n");
    scanf("%d",&n);
    int p=power(m,n);
    printf("%d raised to the power %d is:\n%d",m,n,p);
    return 0;
}
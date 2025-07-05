#include<stdio.h>
void series2(int c,int n){
    if(c>n)
    {
        return;
    }
        printf("%d\n",c);
        series2(c+1,n);
        return;
}

int main(){
    int n;
    printf("enter the n\n");
    scanf("%d",&n); 
    printf("1 to N:\n");
    series2(1,n);
    return 0;
}
#include<stdio.h>

int seriessum2(int n){
    if(n==0)
    {
        return 0;
    }
    else{
        return(n+seriessum2(n-1));
    }
}

int main()
{
    int n;
    printf("enter the number n\n");
    scanf("%d",&n);
    printf("sum is %d",seriessum2(n));
    return 0;
}
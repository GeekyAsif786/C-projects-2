#include<stdio.h>
void seriessum(int n,int s){
    if(n==0)
    {
        printf("%d",s);
        return;
    }
    seriessum(n-1,s+n);
    return;
}

int main()
{
    int n;int s;
    printf("enter the number n:\n");
    scanf("%d",&n);
    seriessum(n,0);
    return 0;

}
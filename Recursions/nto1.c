#include<stdio.h>
void series(int n){
    if(n==0)
    {
        return;
    }
    printf("%d",n);
    series(n-1);
    return;
}

int main()
{
    int n;
    printf("Enter the n");
    scanf("%d",&n);
    printf("The list from n to 1 is:\n");
    series(n);
    return 0;
}
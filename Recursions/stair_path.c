#include <stdio.h>
int stairpath(int n){
    if(n==1 || n==2) return n;
    int ways=stairpath(n-1)+stairpath(n-2);
    return ways;
}

int main(){
    int n;
    printf("enter the number of stairs:\n");
    scanf("%d",&n);
    int ways=stairpath(n);
    printf("Total number of ways to climb the stair:\n%d",ways);
    return 0;
}
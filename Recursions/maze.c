#include <stdio.h>

int maze(int cr,int cc, int er,int ec){
    int rightways=0;int downways=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er)
    {
        rightways += maze(cr,cc+1,er,ec);
    }
    if(cc==ec)
    {
        downways += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec)
    {
        rightways += maze(cr,cc+1,er,ec);
        downways += maze(cr+1,cc,er,ec);
    }
    int totalways=rightways+downways;
    return totalways;
}

int main(){
    int m;
    printf("Enter the rows in maze:\n");
    scanf("%d",&m);
    int n;
    printf("Enter the columns of maze:\n");
    scanf("%d",&n);
    int ways=maze(1,1,m,n);
    printf("The no. of ways to reach the end are:\n%d",ways);
    return 0;
}
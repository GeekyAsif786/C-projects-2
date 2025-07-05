#include <stdio.h>

int maze(int row,int column){
    int rightways=0;int downways=0;
    if(row==1 && column==1) return 1;
    if(row==1)
    {
        rightways += maze(row,column-1);
    }
    if(column==1)
    {
        downways += maze(row-1,column);
    }
    if(row>1 && column>1)
    {
        rightways += maze(row,column-1);
        downways += maze(row-1,column);
    }
    int totalways=rightways+downways;
    return totalways;
}

int main(){
    int row;
    printf("Enter the rows in maze:\n");
    scanf("%d",&row);
    int column;
    printf("Enter the columns of maze:\n");
    scanf("%d",&column);
    int ways=maze(row,column);
    printf("The no. of ways to reach the end are:\n%d",ways);
    return 0;
}
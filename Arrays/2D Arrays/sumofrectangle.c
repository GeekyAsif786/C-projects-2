//Given matrix, find sum of rectangle formed by 2 coordinates (l1,r1) and (l2,r2)

#include <stdio.h>
int main(){
    int r,c;
    printf("Enter the no. of rows:\n");
    scanf("%d",&r);
    printf("Enter the no. of columns:\n");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the array elements:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

// Traversing through the array as per given coordinates 
// and adding the sum of the elements inclusive of the rectangle
   
    int r1,c1,r2,c2;int sum=0;
    printf("enter the starting coordinate:\n");
    scanf("%d,%d",&r1,&c1);
    printf("enter the ending coordinate:\n");
    scanf("%d,%d",&r2,&c2);
    printf("\n");
    for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("The sum is: %d\n",sum);
    return 0;
}
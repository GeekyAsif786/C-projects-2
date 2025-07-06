//Priting the sum of the array elements

#include <stdio.h>
int main(){
    int r,c; int sum=0;
    printf("Enter number of rows\n");
    scanf("%d",&r);
    printf("Enter number of columns\n");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements of array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
        printf("\n");
    }
    printf("The sum of the array elements:\t%d",sum);
    return 0;
}
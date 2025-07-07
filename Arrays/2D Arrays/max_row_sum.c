// Find the row with the maximum sum in a matrix

#include <stdio.h>

int main(){
    int r,c;
    printf("Enter the no. of rows:\n");
    scanf("%d",&r);
    printf("Enter the no. of columns:\n");
    scanf("%d",&c);
    int arr[r][c];int indx; int Maxsum=0;
    printf("Enter the array elements:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        int sum=0; // To store the sum of the upcoming rows and compare with Maxsum to get the
                   // max sum row
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
        if(sum>Maxsum){
            Maxsum=sum;
            indx=i; // To store the row number with maximum sum
        }
        printf("\n");
    }
    printf("Row with maximum sum is: %d and sum is: %d",indx,Maxsum);
    return 0;
}
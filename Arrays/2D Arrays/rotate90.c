// Rotate a matrix by 90 degrees (In this method we store the transpose the matrix in another matrix
// and then reverse each row using swapping technique...)

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
    int trr[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            trr[i][j]=arr[j][i];
        }
        printf("\n");
    }
    //int brr[c][r];
    printf("The 90 degrees Rotated matrix is:\n");
    for(int i=0;i<c;i++){
        int j=0;int k=r-1;

        //swapping arr[i][j] and arr[i][k]

        while(j<k){
            int temp=trr[i][j];
            trr[i][j]=trr[i][k];
            trr[i][k]=temp;
            j++;
            k--;
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d  ",trr[i][j]);
        }
        printf("\n");
    }
    return 0;
}    
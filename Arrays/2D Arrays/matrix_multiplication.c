// Matrix Multiplication 

#include <stdio.h>

int main(){
    int r1,c1,r2,c2;
    printf("Enter the no. of rows of 1st Array:\n");
    scanf("%d",&r1);
    printf("Enter the no. of columns of 1st Array:\n");
    scanf("%d",&c1);
    printf("Enter the no. of rows of 2nd Array:\n");
    scanf("%d",&r2);
    printf("Enter the no. of columns of 2nd Array:\n");
    scanf("%d",&c2);

    //Taking 1st matrix input

    int arr[r1][c1];
    printf("Enter the 1st array elements:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    //Taking 2nd matrix input

    int brr[r2][c2];
    printf("Enter the 2nd array elements:\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&brr[i][j]);
        }
        printf("\n");
    }

    //Evaluating the multiplication
    printf("Product of the matrices are:\n");
    int mrr[r1][c2];
    int cr=2; // The loop of k will run only 2 times c1=r2 times since c1,r2 times the multiply and addition will occur
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            mrr[i][j]=0;
            for(int k=0;k<cr;k++){
                mrr[i][j] += arr[i][k]*brr[k][j];
            }
        }
        printf("\n");
    }

    //Printing the product matrix

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d  ",mrr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
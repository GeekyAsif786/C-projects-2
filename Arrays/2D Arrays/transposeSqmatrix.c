// Tranpose of a matrix
// For square matrix we don't need an extra array to get the transpose...

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

    for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){  //starting j from i so that the transpose starts where j=i
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("The transpose of the matrix is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}    
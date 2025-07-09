// Rotate a matrix by 90 degrees (In this method we transpose the matrix without using an extra matrix
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

    for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){  //starting j from i so that the transpose starts where j=i
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    //swapping arr[i][j] and arr[i][k]

    for(int i=0;i<r;i++){
        int j=0;int k=c-1;
        while(j<k){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}    
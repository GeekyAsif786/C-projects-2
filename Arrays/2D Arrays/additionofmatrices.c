#include <stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows\n");
    scanf("%d",&r);
    printf("Enter number of columns\n");
    scanf("%d",&c);
    int arr[r][c];
    int brr[r][c];
    printf("Enter the elements of 1st array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of 2nd array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&brr[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the arrays:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d   ",(arr[i][j]+brr[i][j]));
        }
        printf("\n\n");
    }
    return 0;
}
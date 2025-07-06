//storing the roll and marks entered by the user

#include <stdio.h>
int main(){
    int r,c;//int roll,marks;
    printf("enter the number of students\n");
    scanf("%d",&r);
    printf("enter the number of subjects\n");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the roll and marks\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
            // printf("Enter the roll and marks\n");
            // scanf("%d",&roll);
            // scanf("%d",&marks);
            // arr[i][j]={roll,marks};
        }
    }
    printf("\n");
    printf("The entered dataset is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d   ",arr[i][j]);
        }
        printf("\n");
    }
}
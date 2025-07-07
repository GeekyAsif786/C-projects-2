//Find the maximum and minimum value in a given array

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
    int max=arr[0][0]; //assigning the first value as max
    int min=arr[0][0]; //assigning the first value as min
    int indxmaxrow=0; //assigning the coordinate of the 
    int indxmaxcol=1; //max and min values as random values
    int indxminrow=0; //before putting the actual 
    int indxmincol=1; //coordinates in the loop

//Getting the maxiumum value

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
                indxmaxrow=i+1;
                indxmaxcol=j+1;
            }
            else{
                continue;
            }
        }
    }

//Getting the minimum value

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
                indxminrow=i+1;
                indxmincol=j+1;
            }
            else{
                continue;
            }
        }
        printf("\n");
    }

    printf("The maximum number is: %d\n",max);
    printf("The minimum number is: %d\n",min);
    printf("The index for maximum number is: %d,%d\n",indxmaxrow,indxmaxcol);
    printf("The index for minimum number is: %d,%d\n",indxminrow,indxmincol);
    return 0;
} 

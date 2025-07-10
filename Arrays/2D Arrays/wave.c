/* Print the matrix in wave pattern
for example:

 matrix=    1  2  3
            4  5  6
            7  8  9 

Wave matrix=  1  2  3
              6  5  4
              7  8  9

*/

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
    printf("Wave matrix:\n");
    for(int i=0;i<r;i++){
        if(i%2 == 0){
            for(int j=0;j<c;j++){  
                printf("%d  ",arr[i][j]);
            }
        }
        else{
            for(int j=c-1;j>=0;j--){
               printf("%d  ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}    

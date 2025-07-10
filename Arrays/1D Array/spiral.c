/* Printing spiral pattern of a matrix
for example:

Matrix=     1  2  3
            4  5  6
            7  8  9 

Spiral Matrix=  1  2  3  6  9  8  7  4  5 
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
    printf("The spiral matrix:\n");
    int minr=0;
    int maxr=r-1;
    int minc=0;
    int maxc=c-1;
    int totalelement=r*c;
    int count=0;

    while(count<totalelement){ // Loop will go on until printed element is less than total element
        //printing min row
        for(int j=minc;j<=maxc;j++){
            printf("%d  ",arr[minr][j]);
            count++;
        }
        if(count>=totalelement) break; // Loop will go on until printed elements are less than or equal to total element
        minr++;
        //printing max column
        for(int i=minr;i<=maxr;i++){
            printf("%d  ",arr[i][maxc]);
            count++;
        }
        if(count>=totalelement) break; //Loop will go on until printed elements are less than or equal to total element
        maxc--;
        //printing max row
        for(int j=maxc;j>=minc;j--){
            printf("%d  ",arr[maxr][j]);
            count++;
        }
        if(count>=totalelement) break; //Loop will go on until printed elements are less than or equal to total element
        maxr--;
        //Printing min col
        for(int i=maxr;i>=minr;i--){
            printf("%d  ",arr[i][minc]);
            count++;
        }
        if(count>=totalelement) break; //Loop will go on until printed elements are less than or equal to total element
        minc++;
    }
    return 0;
}
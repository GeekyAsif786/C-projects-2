/*   INSERTION SORT:
              Time complexity       Space Complexity
   
Best case           O(n^2)                  O(1)
Avg. Case           O(n^2)                  O(1)
Worst case          O(n)                    O(1)

The code for Selection sort is given below...*/

#include <stdio.h>

//Function to swap the numbers

void swap(int* arr,int j){
    int temp=arr[j-1];
    arr[j-1]=arr[j];
    arr[j]=temp;
    return;
}

int main(){

    //input the array

    int size;
    printf("enter the size array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    //Insertion Sort

    for(int i=1;i<=size-1;i++){
        int j=i;
        while(j >= 1 && arr[j] < arr[j-1]){
            swap(arr,j);
            j--;
        }
    }

    //Printing the sorted array
    
    printf("The sorted array:\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
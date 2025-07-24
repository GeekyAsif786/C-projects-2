/*   BUBBLE SORT:        
                Time complexity       Space Complexity
   
Best case           O(n)                    O(1)
Avg. Case           O(n^2)                  O(1)
Worst case          O(n^2)                  O(1)

The code for bubble sort is given below...*/


#include <stdio.h>
#include <stdbool.h>
int main(){
    int size;
    printf("enter the size array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    //Bubble sort

    for(int i=0;i<size-1;i++){
        bool flag=true; //using a flag to check if the array is sorted or not
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false; //if the inner loop is executed it means the arrray is yet to be sorted completely
            }
        }
        if(flag==true) break;
    }

    //Printing the sorted array
    printf("The sorted array:\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
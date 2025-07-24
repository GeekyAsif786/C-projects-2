/*   SELECTION SORT:
              Time complexity       Space Complexity
   
Best case           O(n^2)                  O(1)
Avg. Case           O(n^2)                  O(1)
Worst case          O(n^2)                  O(1)

The code for Selection sort is given below...*/


#include <stdio.h>
#include <limits.h>
int main(){
    int size;
    printf("enter the size array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    //Selection Sort

    for(int i=0;i<=size-1;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<=size-1;j++){
            if(min>arr[j]){
                min=arr[j];
                minidx=j;
            }
        }
        //swapping min and first element of unsorted part

        int temp=arr[minidx];
        arr[minidx]=arr[i];
        arr[i]=temp;
    }
    
    //Printing the sorted array
    
    printf("The sorted array:\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
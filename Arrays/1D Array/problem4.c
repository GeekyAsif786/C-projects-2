/*Find the second largest element in the given array*/

#include <stdio.h>

int func(int size,int* array){
    int max=0;
    for(int i=0;i<size;i++){
           if(array[i]>max){
            max=array[i];
           }
           else{
            continue;
           }
    }
    int max2=0;
    for(int i=0;i<size;i++){
        if(array[i]<max && array[i]>max2){
            max2=array[i];
        }
        else{
            continue;
        }
    }
    return max2;
}

int main(){
    int size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max2=func(size,arr);
    printf("2nd largest element in array is: %d",max2);
    return 0;
}
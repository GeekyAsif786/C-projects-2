#include<stdio.h>

int greatest(int size,int* array){
    int max=array[0];
    for(int i=1;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
        else{
            continue;
        }
    }
    return max;
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
    int maximum=greatest(size,arr);
    printf("The greatest number from the given array of elements is: %d\n",maximum);
    return 0;
}
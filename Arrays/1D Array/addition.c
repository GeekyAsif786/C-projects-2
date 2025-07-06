#include<stdio.h>

int sumofarray(int size,int* array){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+array[i];
    }
    return sum;
}

int main(){
    int size;
    printf("enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum=sumofarray(size,arr);
    printf("Sum of the array elements=\t%d\n",sum);
}
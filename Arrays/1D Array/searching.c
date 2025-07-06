#include <stdio.h>

void search(int* array,int size,int k){
    for(int i=0;i<size;i++){
        if(array[i]==k){
            printf("Yes, the entered value is present in the array in index: %d\n",i);
            break;
        }
        else{
            continue;
        }
    }
    return;
}


int main(){
    int size;double k;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to search:\n");
    scanf("%lf",&k);
    search(arr,size,k);
    return 0;
}
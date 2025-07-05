/*WAP to copy the contents of one array into another array in reverse order*/

#include <stdio.h>

void func(int size, int* array){
    int brr[size];
    for(int i=0,j=size-1;i<size,j>=0;i++,j--){
         brr[j]=array[i];
    }
    printf("The new array with reversed contents:\n");
    for(int i=0;i<size;i++){
        printf("%d\n",brr[i]);
    }
    return;
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
    func(size,arr);
    return 0;
}
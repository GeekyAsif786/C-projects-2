#include<stdio.h>

int func(int array[]){
    for(int i=0;i<=5;i++){
        printf("value at %d is %d\n",i,array[i]);
    }
    array[1]=23;
    return 0;
}

int main(){
    int arr[]={12,44,61,222,19,78};
    printf("Value at 1 before manipulation is %d\n",arr[1]);
    func(arr);
    printf("Value at index 1 after manipulation is %d\n",arr[1]);
    return 0;
}
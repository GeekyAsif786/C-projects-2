/*Given an array of integers, change the value of all 
odd indexed elements to its second multiple and increment all even indexed value by 10.*/

#include<stdio.h>

void newarray(int size,int* array){
    printf("The new array after changes:\n");
    for(int i=0;i<size;i++){
        if(i%2==0){
            array[i]=array[i]+10;
        }
        else{
            array[i]=array[i]*2;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d\n",array[i]);
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
    newarray(size,arr);
    return 0;
}
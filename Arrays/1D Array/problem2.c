/*Count the number of elements in a given array which are greater than x(given by user)*/

#include<stdio.h>

void func(int size,int x,int* array){
    int counter=0;int array2[50];
    for(int i=0;i<size;i++){
        if(array[i]>x){
            counter++;
            for(int j=0;j<=i;j++)
            {
                array2[j]=array[i];
            }
        }
        else{
            continue;
        }
    }
    //printf("No. of elements greater than %d is %d\n",x,counter);
    printf("No. of elements greater than %d are:\n",x);
    for(int i=0;i<size;i++){
        printf("Numbers which are greater are:%d\n",array2[i]);
    }
    printf("Total number of elements greater than %d is %d\n",x,counter);
    return;
}

int main(){
    int size,x;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to check as 'X'\n");
    scanf("%d",&x);
    func(size,x,arr);
    return 0;
}
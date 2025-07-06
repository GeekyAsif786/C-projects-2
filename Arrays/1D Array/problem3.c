/*Find the total number of pairs in the array whose sum is equal to the given value X*/

#include <stdio.h>

void func(int size, int x, int* array)
{
    int sum;int counter=0;
    for(int i=0;i<size-1;i++)
    {
        //sum=array[i]+array[i+1];
        for(int j=i+1;j<size;j++){ 
            sum=array[i]+array[j];
            if(sum==x){
            counter++;
            }
            else{
                continue;
            }
        }
    }
    printf("The number of pairs having sum equal to %d is %d\n",x,counter);
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
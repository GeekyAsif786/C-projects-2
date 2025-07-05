/*Rotating an array by K steps or reversing an array as given in range*/


#include <stdio.h>

void rotate(int array[],int a, int b){
    for(int i=a,j=b;i<=j;i++,j--){
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
    return;
}

void reverse(int array[],int size)
{
    for(int i=0,j=size-1;i<=j;i++){
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
    return;
}

int main(){
    int size,a,b,k,choice;
    restart: //restarting the process as goto statement is triggered
    printf("enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements\n");
    for(int i=0;i<=size;i++){
        scanf("%d",&arr[i]);
    }
    choose: // As wrong choice was made, so user needs to re-enter choice as triggered by goto statement
    printf("Enter 1 to rotate the whole array\nEnter 2 to rotate as per your given range\nEnter 3 to Rotate as per your given steps\nEnter 4 to re-enter the array\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        reverse(arr,size);
        printf("The rotated array:\n");
        for(int i=0;i<=size;i++){
            printf("%d\t",arr[i]);
            }
        break;
        case 2:
        printf("Enter the starting index:\n");
        scanf("%d",&a);
        printf("Enter the starting index:\n");
        scanf("%d",&b);
        rotate(arr,a,b);
        printf("The rotated array:\n");
        for(int i=0;i<=size;i++){
            printf("%d\t",arr[i]);
        }
        break;
        case 3:
        printf("Enter the step (Value of K):\n");
        scanf("%d",&k);
        k=k%size; //if k>n then the rotation wont repeat itself uselessly to retain the original array
        rotate(arr,0,size-1);
        rotate(arr,0,k-1);
        rotate(arr,k,size-1);
        printf("The rotated array:\n");
        for(int i=0;i<=size;i++){
            printf("%d\t",arr[i]);
            }
        break;
        case 4:
        goto restart;
        default:
        printf("Wrong input, Kindly re-enter your choice...\n");
        goto choose;
    }
    return 0;
}
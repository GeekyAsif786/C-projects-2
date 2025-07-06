#include<stdio.h>

void arrprint(int* array, int size) //function to print array
{
    for(int i=0;i<size;i++){
        printf("Roll %d --> %d\n",i,array[i]);
    }
}

void failedstudents(int* array,int size){
    printf("\nStudents with less than 35 marks:\n");
    for(int i=0;i<size;i++){
        if(array[i]<35) 
        {
            printf("Roll %d --> %d\n",i,array[i]);
        }
        else{
            continue;
        }
    }
}

int main(){
    int size;
    printf("enter the number of students\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the marks of the %d students\n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    //arrprint(arr,size);//calling function to print the array
    failedstudents(arr,size);
}
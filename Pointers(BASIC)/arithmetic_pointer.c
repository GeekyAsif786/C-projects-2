#include<stdio.h>
int main(){
    int arr[]={1,3,5,7,9};
    printf("The value of 3rd element(at index 2 of array) is: %d\n",arr[2]); // returns value stored in 3rd position of array or 2nd index value
    printf("The adress of 1st element(at index 0 of array) is: %d\n",&arr[0]); // returns the address of 1st element of array
    printf("The adress of 1st element(at index 0 of array) is: %d\n",arr);// returns value stored in 1st position of array or 0th index value
    printf("The adress of 3rd element(at index 2 of array) is: %d\n",&arr[2]); // returns the address of the 3rd element of array
    printf("The adress of 3rd element(at index 2 of array) is: %d\n",arr+2);
    printf("The adress of 3rd element(at index 2 of array) is: %d\n",arr+3);// works same as 7th line command
    printf("The adress of 3rd element(at index 2 of array) is: %p\n",arr+2);
    printf("The adress of 3rd element(at index 2 of array) is: %p\n",&arr[2]);
    printf("The adress of 3rd element(at index 2 of array) is: %p\n",arr+3);
    printf("The value of 3rd element(at index 2 of array) is: %d\n",*(arr+2)); // returns value stored in 3rd position of array or 2nd index value
}

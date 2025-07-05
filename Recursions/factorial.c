#include <stdio.h>

int factorial(int number)
{
    if(number==1 || number==0) {
        return 1;
    }
    else {
        return(number*factorial(number-1));
    }
}



int main()
{
    int number;
    printf("enter the number to find factorial\n");
    scanf("%d\n",&number);
    printf("The factorial of %d is %d\n",number,factorial(number));
    return 0;
}
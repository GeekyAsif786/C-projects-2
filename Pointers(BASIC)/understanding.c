#include<stdio.h>
int main(){
    int var=7;
    int *ptr=&var;
    int **ptra=&ptr;
    printf("value of var is:%d\n",var);
    printf("value of var is:%d\n",*ptr);
    printf("address of var is:%p\n",ptr);
    printf("address of var is %p\n",&var);
    printf("address of pointer ptr is %p\n",&ptr);
    printf("address of pointer ptr is %p\n",ptra);
    return 0;
}
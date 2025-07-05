#include <stdio.h>

void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}

int main(){
    int x,y;
    printf("enter the 1st value:\n");
    scanf("%d",&x);
    printf("enter the 2nd value:\n");
    scanf("%d",&y);
    printf("Values entered:\nA=%d\nB=%d\n",x,y);
    swap(&x,&y);
    printf("The swapped values are:\nA=%d\nB=%d",x,y);
    return 0;
}
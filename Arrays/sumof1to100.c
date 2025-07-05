#include <stdio.h>

int main(){
    int array[100];int sum=0;
    for(int i=0,j=1;i<=99,j<=100;i++,j++){
        array[i]=j;
    }
    for(int i=0;i<100;i++){
        sum=sum+array[i];
    }
    printf("sum of 1 to 100 is: %d\n",sum);
    return 0;
}
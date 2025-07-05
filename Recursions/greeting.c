#include <stdio.h>
void greetings(int n){
    if(n==0){
        return;
       }
    printf("Good Morning\n");
    greetings(n-1);
    return;
}
int main() {
    int number;
    printf("Enter the number of times you want to greet\n");
    scanf("%d",&number);
    greetings(number);
    return 0;
}
#include <stdio.h>

void reversestring(char str[],int size){
    char rev[100];
    printf("The reversed string is:\n");
    for(int i=size-1;i>=0;i--){ //reversing the string by placing letters in reverse order
        printf("%c",str[i]);
    }
}

int main(){
    char str[100];
    printf("Enter the string you want to reverse:\n");
    scanf("%[^\n]s",str);
    int i=0;int size=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("The size of string entered is: %d\n",size);
    printf("\n");
    reversestring(str,size); //calling the reverse function
    return 0;
}



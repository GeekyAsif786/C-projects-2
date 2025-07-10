//We can also do this by storing the reversed string in another variable and print it in main() function

#include <stdio.h>
#include <string.h>

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
    char rev[100];
    for(int i=size-1,j=0;i>=0,j<size;i--,j++){ //reversing the string by placing letters in reverse order
            rev[j]=str[i];
    }
    printf("Reversed string is:\n");
    puts(rev);
    return 0;
}
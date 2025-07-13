#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter the string:\n");
    scanf("%[^\n]s",str);
    char str2[100];
    int i=0;
    while(str[i]!='\0'){
        str2[i]=str[i];
        i++;
    }    
    printf("The copied string:\n");
    puts(str2);
    return 0;
}
//Inserting a new character in a a string 

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter the string:\n");
    scanf("%[^\n]s",str);
    int size=0;
    while(str[size]!='\0'){
        size++;
    }
    for(int i=size;i>=2;i--){
        str[i+1]=str[i]; //Pushing each character by 1 index in order to fit in the new character in the desired position
    }
    str[2]='c';
    printf("The new string formed:\n");
    puts(str);
    return 0;
}
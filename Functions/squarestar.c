#include <stdio.h>
void squarestar(int rows)
{
    for(int i=rows;i>=1;i--)
    {
        for(int j=rows;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows;
    printf("enter the number of rows you want your pattern to be:\n");
    scanf("%d",&rows);
    printf("Here is your pattern:\n");
    squarestar(rows);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//creating a structure to store book details
int main(){
struct books //a data type books 
{
    char name[100]; //variable to store the name of the book
    int pages; //variable to store the no. of pages
    float price; //variable to store price of the book
}Physics,chemistry,maths; // here we declared 3 variable in structure 'books'.

// Now enter the different employee details using the following syntax prototype

strcpy(Physics.name, "Physics"); //for a string to enter we need to create a copy to store the name/string
Physics.pages=500;
Physics.price=750.00;

strcpy(chemistry.name, "Chemistry");
chemistry.pages=320;
chemistry.price=570.00;

strcpy(maths.name, "Mathematics");
maths.pages=6650;
maths.price=750.00;
//and so on enter the other employee details in similar way...

// Testing a sample print

printf("Chemistry book pages -> %d",chemistry.pages);
return 0;
}
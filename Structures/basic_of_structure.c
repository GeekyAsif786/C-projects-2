#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//creating a structure to store employee details
int main(){
struct employee //a data type employee which stores different datas of various data types
{
    int eid; //variable to store the employee id 
    int cabin; //variable to store the cabin number of the employee
    char name[100]; //variable to store the name of the employee
    float salary; //variable to store salary of employee
    bool status; //variable of boolean type to check the status of employee (if the employee is active or inactive)
}Asif,SD,JD,Nandu,Satyam,abhi,pg; // here we declared 7 variable in structure 'employee'.

// Now enter the different employee details using the following syntax prototype

Asif.eid= 1;
Asif.cabin=300;
Asif.salary=450000;
Asif.status=true;

//and so on enter the other employee details in similar way...

printf("Salary -> %lf\n",Asif.salary); //printing the salary of employee
printf("Enter the cabin no. of SD:\n");
scanf("%d",&SD.cabin); //Taking input from user 
printf("Cabin of SD: %d\n",SD.cabin);

return 0;
}
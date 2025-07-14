//Here in this sample code we are simply passing the attributes of a structure as pointers to the 
//user defined function made to fetch the pointers passed by the main function...

#include <stdio.h>

typedef struct person{
    int age;
    int height;
    int weight;
}person;

void func(person p){
    printf("Age-%d\nHeight-%d\nWeight-%d\n",p.age,p.height,p.weight);
    printf("\n");
    return;
}

void fetch(int* a,int* b,int* c){
    printf("The biodata of the person is:\n");
    printf("Age-%d\nHeight-%d\nWeight-%d\n",*a,*b,*c); //ftching the biodata from main function passed as pointers
    return;
}

int main(){
    person p;
    p.age=21;
    p.height=180;
    p.weight=75;
    int* x=&p.age; // adddress of attribute age is stored in x 
    int* y=&p.height; // adddress of attribute height is stored in y
    int* z=&p.weight; // adddress of attribute weight is stored in z
    func(p);
    fetch(x,y,z); //passing the aaddress of age,height and weight to the function 'fetch'
    return 0;
}
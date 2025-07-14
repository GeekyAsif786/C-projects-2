//Passing a structure as a function (declaring the structure globally)
// Always remember that normally the parameters are passed by value in case of structures and not by reference...

#include <stdio.h>

typedef struct pokemon{
    int attack;
    int hp;
    char tier;
}pokemon;

void func(pokemon p){
    printf("%d",p.hp); 
    return;
}

int main(){
    pokemon pikachu;
    pikachu.hp=250;
    pikachu.attack=120;
    pikachu.tier='A';
    func(pikachu); //all the data or attributes of pokemon pikachu are now accessible in function func()
    return 0;
}
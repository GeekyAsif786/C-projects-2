#include <stdio.h>
int main(){
    typedef struct pokemon{
        int attack;
        int hp;
        int def;
        char tier;
    }pokemon;

    pokemon pikachu;
    pokemon charizard;
    pokemon bulbasaur;
    pokemon dialga;
    pokemon arr[3];

    pikachu.attack=120;
    pikachu.hp=200;
    pikachu.def=250;
    pikachu.tier='A';

    bulbasaur=pikachu;

    printf("%d\n",pikachu.attack);
    printf("%d",bulbasaur.def);
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    typedef struct pokemon{
        int attack;
        int hp;
        int speed;
        char tier;
    }pokemon;
    
    typedef struct legendarypokemon{
        pokemon normal; //creates a variable of data type- pokemon which will now fork the attributes of <pokemon> into <legendarypokemon>
        char ability[50];
    }legendarypokemon;

    typedef struct godpokemon{
        legendarypokemon legend; //creates a variable of data type- pokemon which will now fork the attributes of <legendarypokemon> into <godpokemon>
        char specialattack[50];
    }godpokemon;

    legendarypokemon mewtwo;
    godpokemon arceus;
    mewtwo.normal.attack=580;
    arceus.legend.normal.attack=87900;
    strcpy(mewtwo.ability,"Supercharge");
    strcpy(arceus.specialattack,"Cosmic Whirlpool");
    mewtwo.normal.speed=1290; //To assign a normal pokemon attribute to legendary pokemon then we need to go hierarchy-wise.
    printf("%d\n",mewtwo.normal.attack);
    puts(mewtwo.ability);
    printf("%d\n",mewtwo.normal.speed);
    printf("%d\n",arceus.legend.normal.attack);
    puts(arceus.specialattack);
    return 0;
}
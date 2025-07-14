//Creating an array of structures to store data of 3 pokemons, we take entries using a basic for-loop syntax

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
    pokemon dialga;
    pokemon arr[3];
    
    //taking input of attack of the 3 pokemons

    printf("Enter the attack of-\npikachu\ncharizard\ndialga\n");
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i].attack);
    }
    
    //taking input of hp of the 3 pokemons

    printf("Enter the HP of-\npikachu\ncharizard\ndialga\n");
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i].hp);
    }
    
    //taking input of defense of the 3 pokemons

    printf("Enter the defense of-\npikachu\ncharizard\ndialga\n");
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i].def);
    }
    
    //taking input of tier of the 3 pokemons

    printf("Enter the tier of-\npikachu\ncharizard\ndialga\n");
    for(int i=0;i<3;i++){
        scanf("%c",&arr[i].tier);
    }
    printf("\n");
    printf("The attack of-\npikachu\ncharizard\ndialga\n");
    for(int i=0;i<3;i++){
        printf("%d\n",arr[i].attack);
    }
    
    //taking input of hp of the 3 pokemons

    printf("The HP of-\npikachu\ncharizard\ndialga\n");
    for(int i=0;i<3;i++){
        printf("%d\n",arr[i].hp);
    }
    
    //taking input of defense of the 3 pokemons

    printf("The defense of-\npikachu\ncharizard\ndialga\n");
    for(int i=0;i<3;i++){
        printf("%d\n",arr[i].def);
    }
    
    //taking input of tier of the 3 pokemons

    printf("The tier of-\npikachu\ncharizard\ndialga\n");
    for(int i=0;i<3;i++){
        printf("%c\n",arr[i].tier);
    }

    return 0;
}
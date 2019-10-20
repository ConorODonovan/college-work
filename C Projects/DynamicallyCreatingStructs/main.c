#include <stdio.h>
#include <stdlib.h>

#define MAX_POKEMON 6

struct pokemon
{
    int id;
    char name[24];
    char type[12];
    int level;
    int attack;
    int defense;
};

// Function prototypes
void getPokemonData(struct pokemon *pokemonPtr);
void displayPokemonData(struct pokemon *pokemonPtr);

int main()
{
    struct pokemon pokemonList[MAX_POKEMON];
    struct pokemon *pokemonListPtr;

    int i;

    for (i = 0; i < MAX_POKEMON; i++)
    {
        pokemonListPtr = &pokemonList[i];
        getPokemonData(pokemonListPtr);
    }

    for (i = 0; i < MAX_POKEMON; i++)
    {
        printf("Pokemon %d\n", i);
        pokemonListPtr = &pokemonList[i];
        displayPokemonData(pokemonListPtr);
        printf("\n");
    }

    return 0;
}

void getPokemonData(struct pokemon *pokemonPtr)
{
    printf("Enter Pokemon ID: ");
    scanf("%d", &(pokemonPtr->id));
    printf("\n");

    printf("Enter Pokemon Name: ");
    scanf("%24s", pokemonPtr->name);
    printf("\n");

    printf("Enter Pokemon Type: ");
    scanf("%s12", pokemonPtr->type);
    printf("\n");

    printf("Enter Pokemon Level: ");
    scanf("%d", &(pokemonPtr->level));
    printf("\n");

    printf("Enter Pokemon Attack: ");
    scanf("%d", &(pokemonPtr->attack));
    printf("\n");

    printf("Enter Pokemon defense: ");
    scanf("%d", &(pokemonPtr->defense));
    printf("\n");
}

void displayPokemonData(struct pokemon *pokemonPtr)
{
    printf("Pokemon ID: %d\n", pokemonPtr->id);
    printf("Pokemon Name: %s\n", pokemonPtr->name);
    printf("Pokemon Type: %s\n", pokemonPtr->type);
    printf("Pokemon Level: %d\n", pokemonPtr->level);
    printf("Pokemon Attack: %d\n", pokemonPtr->attack);
    printf("Pokemon Defense: %d\n", pokemonPtr->defense);
}

#include <stdio.h>
#include <stdlib.h>

struct pokemon
{
    int id;
    char *name;
    char *type;
    int level;
    int attack;
    int defense;
};

int main()
{
    struct pokemon snorlax;
    struct pokemon *snorlaxPtr;

    snorlaxPtr = &snorlax;

    snorlax.id = 143;
    snorlax.name = "Snorlax";
    snorlax.type = "Normal";
    snorlax.level = 50;
    snorlax.attack = 40;
    snorlax.defense = 90;

    printf("Displaying the contents of the structure using dot notation:\n");
    printf("Entry: %d\n", snorlax.id);
    printf("Name: %s\n", snorlax.name);
    printf("Type: %s\n", snorlax.type);
    printf("Level: %d\n", snorlax.level);
    printf("Attack: %d\n", snorlax.attack);
    printf("Defense: %d\n\n", snorlax.defense);

    printf("Displaying the contents of the structure using pointer notation:\n");
    printf("Entry: %d\n", snorlaxPtr->id);
    printf("Name: %s\n", snorlaxPtr->name);
    printf("Type: %s\n", snorlaxPtr->type);
    printf("Level: %d\n", snorlaxPtr->level);
    printf("Attack: %d\n", snorlaxPtr->attack);
    printf("Defense: %d\n\n", snorlaxPtr->defense);

    return 0;
}

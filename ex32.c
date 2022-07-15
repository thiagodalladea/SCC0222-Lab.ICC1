#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int HP;
    int attack;
    int defense;
    int espAttack;
    int espDefense;
    int velocity;
} Atributes;

typedef struct {
    char name[20];
    int basePower;
    float acuracy;
    char classs; //p - físico, s- especial
} Attack;

typedef struct {
    char name[50];
    char primType[20];
    char secType[20];
    Attack attack[4];
    Atributes atributes;
} Pokemon;

Attack rAttack() {
    Attack retAttack;
    scanf("%s\n", retAttack.name);
    scanf("%d\n", &retAttack.basePower);
    scanf("%f\n", &retAttack.acuracy);
    scanf("%c\n", &retAttack.classs);
    return retAttack;
}

Pokemon rPokemon() {
    Pokemon retPokemon;
    scanf("%s", retPokemon.name);
    scanf("%s", retPokemon.primType);
    scanf("%s", retPokemon.secType);
    scanf("%d", &retPokemon.atributes.HP);
    scanf("%d", &retPokemon.atributes.attack);
    scanf("%d", &retPokemon.atributes.defense);
    scanf("%d", &retPokemon.atributes.espAttack);
    scanf("%d", &retPokemon.atributes.espDefense);
    scanf("%d", &retPokemon.atributes.velocity);
    return retPokemon;
}

void pPokemon(Pokemon pkm) {
    printf("Nome do Pokemon: %s\n", pkm.name);
    printf("Tipo primario: %s\n", pkm.primType);
    printf("Tipo secundario: %s\n", pkm.secType);
    printf("Status:\n");
    printf("\tHP: %d\n", pkm.atributes.HP);
    printf("\tAtaque: %d\n", pkm.atributes.attack);
    printf("\tDefesa: %d\n", pkm.atributes.defense);
    printf("\tAtaque Especial: %d\n", pkm.atributes.espAttack);
    printf("\tDefesa Especial: %d\n", pkm.atributes.espDefense);
    printf("\tVelocidade: %d\n\n", pkm.atributes.velocity);
}

void pAttack(Attack atc) {
    printf("Nome do Ataque: %s\n", atc.name);
    printf("Poder base: %d\n", atc.basePower);
    printf("Acuracia: %f\n", atc.acuracy);
    printf("Classe: %c\n\n", atc.classs);
}

int main() {
    Pokemon *pkms = NULL;
    int count = 0, command, indPokemon, indAttack;
    while(1) {
        scanf("%d", &command);
        if(command == 0) {
            break;
        }
        if(command == 1) {
            pkms = realloc(pkms, (count + 1) * sizeof(Pokemon));
            pkms[count] = rPokemon();
            count++;
        } else if(command == 2) {
            scanf("%d", &indPokemon);
            scanf("%d", &indAttack);
            pkms[indPokemon].attack[indAttack] = rAttack();
        } else if(command == 3) {
            scanf("%d", &indPokemon);
            pPokemon(*(pkms + indPokemon));
        } else {
            scanf("%d", &indPokemon);
            scanf("%d", &indAttack);
            pAttack(pkms[indPokemon].attack[indAttack]);
        }
    }
    free(pkms);
    return 0;
}

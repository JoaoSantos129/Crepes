#include <stdio.h>

#define FLOUR_PER_PERSON 125
#define MILK_PER_PERSON 0.25
#define EGG_PER_PERSON 1.5
#define SALT_PER_PERSON 0.5
#define BUTTER_PER_PERSON 0.5

int menu (){
    int nbMangeurs;
    printf("Combien de personnes mangent des crepes?");
    scanf("%d", &nbMangeurs);

    return nbMangeurs;
}

int calcul (nbPersons){
    int farine = FLOUR_PER_PERSON * nbPersons;
    int lait = MILK_PER_PERSON * nbPersons;
    int oeufs = EGG_PER_PERSON * nbPersons;
    int sel = SALT_PER_PERSON * nbPersons;
    int beurre = BUTTER_PER_PERSON * nbPersons;

    printf("\n\nLes ingredients necessaires:\n");
    printf("\n\n - Farine : %d\n" );
}

int main() {
    int nbPersonnes = 0;

    nbPersonnes = menu();
    calcul(nbPersonnes);

    return 0;
}
/*
Vous arrivez dans un village le jour du marché, de nombreux marchands vendent la spécialité locale, de délicieuses petites galettes. Elles ont toutes l'air d'être identiques, donc vous décidez d'acheter les moins chères.

Ce que doit faire votre programme :
Votre programme doit lire un entier nbMarchands (non nul) puis les nbMarchands entiers suivants, qui indiquent le prix des galettes chez chaque marchand, de la position 1 à la position nbMarchands. Votre programme devra ensuite afficher la position du plus petit de ces prix. En cas d'égalité entre deux prix, on prendra la position la plus grande. Tous les prix et positions sont positifs et ne dépassent pas 1 million.

EXAMPLE
input:

6
12
11
9
11
9
15
output:

5
COMMENTS
Parmi ces 6 marchands, c'est le 5ème qui vend ses galettes le moins cher, à 9 euros la galette. Il est à égalité avec le 3e marchand, mais on préfère le 5e qui est le plus près du bout de la rue.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbMarchands, i;

    do {
        printf("Veuillez saisir la nombre de marchands : ");
        scanf ("%d", &nbMarchands);
    }while(nbMarchands <= 0);

    int TabPrix[nbMarchands];
    printf("Veuillez saisir les prix des galettes chez chaque marchand : \n");
    for (i = 0 ; i < nbMarchands ; i++){
        printf("Prix du marchand %d: ", i + 1);
        scanf("%d", &TabPrix[i]);
    }

    int minPrix = TabPrix[0];
    int minPosition = 1;

    for (i = 1 ; i < nbMarchands ; i++){
        if ((TabPrix[i] < minPrix) || (TabPrix[i] == minPrix && i+1 > minPosition)){
            minPrix = TabPrix[i];
            minPosition = i+1;
        }
    }

    printf("La position du marchand avec le prix le plus bas est: %d\n", minPosition);

    return 0;
}

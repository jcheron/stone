#include <stdio.h>
#include "gest_partie.h"

int saisie_nombre(const char* prompt) {
    int n;
    printf(BLEU_"%s"BLEU, prompt);
    scanf("%d", &n);
    getchar();
    return n;
}

int est_nombre(int c) {
    switch (c) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    {
        return 1;
        break;
    }
    default:
    {   return 0;
        break;
    }
    }
}



void initialiser(int *nbca, int *jo)
{
    printf("Donnez le nombre de cailloux: ");
    scanf("%d",nbca);
    printf(" (1) utilisateur, (2) machine \n");
    *jo = saisie_nombre("> ");
    while (!est_nombre(*jo) || *jo < 1 || *jo > 2) {
        puts(ROUGE_"ERREUR:"ROUGE" \bchoix incorrect"BLANC);
        *jo = saisie_nombre("rep?");
    }
}


int changer_tour_jeu(int jo)
{
    if (jo == 2) return 1 ;
    else return 2;
}




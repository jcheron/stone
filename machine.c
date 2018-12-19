#include <stdio.h>
#include "machine.h"

// stratégie gagnante
void machine_jou(int *nbca)
{

    int nbcailloux;
    int mod = *nbca % 4;
    if (mod == 1) { // on ne peut rien faire !
        nbcailloux = rand()% 3 + 1;
        if (nbcailloux > *nbca)
            nbcailloux = *nbca;
    }
    else
    {   switch(mod) // mise en place de la stratégie gagnante
        {
        case 0 :
            nbcailloux = 3;
            break;
        case 2 :
            nbcailloux = 1;
            break;
        case 3 :
            nbcailloux = 2;
            break;
        }
    }
    printf("la machine prend %d cailloux \n", nbcailloux);
    *nbca = *nbca - nbcailloux;
    printf("Il vous reste %d cailloux\n\n", *nbca);
}

/*
void machine_joue(int *nbca)
{
    int nbcailleux;
    if ( nbcailloux % 4 == 1)
    nbcailloux = rand()% 3 + 1;
    printf("la machine prend %d cailloux \n", nbcailloux);
    *nbca = *nbca - nbcailloux;
    printf("Il vous reste %d cailloux\n", *nbca);
}
*/

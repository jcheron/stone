#include <stdio.h>
#include "joueur.h"
void utilisateur_jou(int *nbca) 
{

  int nbcailloux; 

  do {
    printf("combien de cailloux prenez-vous (reste %d cailloux) ?: ", *nbca); 
    scanf("%d",&nbcailloux); 
  } while (nbcailloux <= 0 || nbcailloux >= 4 || nbcailloux > *nbca);
  *nbca = *nbca - nbcailloux;
}


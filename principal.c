#include <stdio.h>
#include "joueur.h"
#include "machine.h"
#include "gest_partie.h"

int main() {
  int nbcailloux, joueur, perdant = 0, fin = 0; 

 /* initialiser la graine aléatoire: */
  srand(time(NULL));
  
  initialiser(&nbcailloux,&joueur); 
  while (!fin)
	   {
	     if (joueur == 1) 
	       utilisateur_jou(&nbcailloux); 
	     else 
	       machine_jou(&nbcailloux); 
	     if (nbcailloux == 0)
	       {
		 perdant = joueur; 
		 fin  = 1; 
	       }
	     else 
	       joueur = changer_tour_jeu(joueur); 
	   }
	 if (perdant == 1) printf("vous avez perdu !!! \n"); 
	 else printf("Super!! vous avez gagné la partie \n"); 

 return 0;
}


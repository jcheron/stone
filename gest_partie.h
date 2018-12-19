#ifndef GEST_PARTIE_H
#define GEST_PARTIE_H

#define BLEU  "\033[0;94m"
#define BLEU_ "\033[1;94m"
#define VERT  "\033[0;32m"
#define VERT_ "\033[1;32m"
#define ROUGE "\033[0;31m"
#define ROUGE_ "\033[1;31m"
#define JAUNE "\033[33m"
#define JAUNE_ "\033[1;33m"
#define BLANC "\033[0;37m"
#define BLANC_ "\033[1;37m"


/* initialiser le jeu cailloux */
void initialiser(int *nbca, int *jo);

int changer_tour_jeu(int jo);

int est_nombre(int c);

int saisie_nombre(const char* prompt);

#endif

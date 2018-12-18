CC=gcc
OBJ=gest_partie.o joueur.o machine.o principal.o
CFLAGS=-W -Wall


principal: gest_partie.o joueur.o machine.o principal.o
	$(CC) $(CFLAGS) $(OBJ) -o principal

gest_partie.o: gest_partie.c gest_partie.h
	$(CC) $(CFLAGS) -c gest_partie.c

joueur.o: joueur.c joueur.h machine.h
	$(CC) $(CFLAGS) -c joueur.c

machine.o: machine.c machine.h joueur.h
	$(CC) $(CFLAGS) -c machine.c

principal.o: principal.c gest_partie.h joueur.h machine.h
	$(CC) $(CFLAGS) -c principal.c

clean: 
	rm -rf *.o

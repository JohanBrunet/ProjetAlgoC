#include <stdlib.h>
#include <stdio.h>
#include "Joueur.h"
#include "Bateaux.h"
#include "Bateau.h"

/* Cr�er un joueur vide (sans bateau) avec seulement son num�ro  */
Joueur creerJoueur(int numJoueur) {
    Joueur j;
    j->numeroJoueur = numJoueur;

}

/* Renvoie l'ensemble des bateaux restantes du joueur  */
Bateaux bateauxNonCoules(Joueur j) {
    Bateaux listeBateaux = j->listeBateaux;
    int i = nombreBateaux(listeBateaux);
    int x;
    for(x=0; x<i; x++) {

    }
}

/* Renvoie le num�ro du joueur */
int getNumJoueur(Joueur j) {
    return j->numeroJoueur;
}

/* D�finit le num�ro du joueur */
void setNumJoueur(Joueur j, int numJoueur) {
    j->numeroJoueur = numjoueur;
}

/* D�finit les bateaux du joueur */
void setBateauxJoueur(Joueur j, Bateaux listeBateaux) {
    j->listeBateaux = listeBateaux;
}

/* Renvoie les bateaux du joueur */
Bateaux getBateauxJoueur(Joueur j) {
    return j->listeBateaux;
}

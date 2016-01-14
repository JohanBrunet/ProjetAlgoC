#include <stdlib.h>
#include <stdio.h>
#include "Joueur.h"
#include "Bateaux.h"
#include "Bateau.h"
#include "Grille.h"

/* Cr�er un joueur vide (sans bateau) avec seulement son num�ro  */
Joueur creerJoueur(int numJoueur) {
    Joueur j;
    j->numeroJoueur = numJoueur;
    return joueur;
}

/* Renvoie l'ensemble des bateaux restantes du joueur  */
Bateaux bateauxNonCoules(Joueur j, Grille g) {
    Bateaux listeBateaux = j->grille->bateaux;
    int i = nombreBateaux(listeBateaux);
    int x;
    Bateau b;
    int compteur = 0;
    int[] position;
    for(x=0; x<i; x++) {
        recupererBateau(listeBateaux, x);
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
    j->grille->bateaux = listeBateaux;
}

/* Renvoie les bateaux du joueur */
Bateaux getBateauxJoueur(Joueur j) {
    return j->grille->bateaux;
}

/* D�finit la Grille du joueur */
void setGrilleJoueur(Joueur j, Grille g) {
    j->grille = g;
}

/* Renvoie la Grille du joueur */
Bateaux getGrilleJoueur(Joueur j) {
    return j->grille;
}

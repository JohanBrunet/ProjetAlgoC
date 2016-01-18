#include <stdlib.h>
#include <stdio.h>
#include "Joueur.h"
#include "Bateaux.h"
#include "Bateau.h"
#include "Grille.h"

/* Créer un joueur vide (sans bateau) avec seulement son numéro  */
Joueur creerJoueur(int numJoueur) {
    printf("Creation du joueur numero %d !\n", numJoueur);
    Joueur j = NULL;
    j->numeroJoueur = numJoueur;   // le bug est ici !
    printf("Joueur numero %d cree !\n", numJoueur);
    return j;
}

/* Renvoie l'ensemble des bateaux restantes du joueur  */
Bateaux bateauxNonCoules(Joueur j, Grille g) {
    Bateaux listeBateaux = j->grille->bateaux;
    Bateaux bateauxRestants;
    int i = nombreBateaux(listeBateaux);
    int x;
    /* Bateau b;
    int compteur = 0;
    int position; */
    for(x=0; x<i; x++) {
        bateauxRestants = recupererBateau(listeBateaux, x);
    }
    return bateauxRestants;
}

/* Renvoie le numéro du joueur */
int getNumJoueur(Joueur j) {
    return j->numeroJoueur;
}

/* Définit le numéro du joueur */
void setNumJoueur(Joueur j, int numJoueur) {
    j->numeroJoueur = numJoueur;
}

/* Définit les bateaux du joueur */
void setBateauxJoueur(Joueur j, Bateaux listeBateaux) {
    j->grille->bateaux = listeBateaux;
}

/* Renvoie les bateaux du joueur */
Bateaux getBateauxJoueur(Joueur j) {
    return j->grille->bateaux;
}

/* Définit la Grille du joueur */
void setGrilleJoueur(Joueur j, Grille g) {
    j->grille = g;
}

/* Renvoie la Grille du joueur */
Bateaux getGrilleJoueur(Joueur j) {
    return j->grille;
}

/* Renvoie true si le joueur a encore des bateaux non coulés */
int estEnVie(Joueur j) {
    int result = 0;
    Grille g = getGrilleJoueur(j);
    Bateaux listeBateaux = g->bateaux;
    int i = nombreBateaux(listeBateaux);
    int x;
    int X;
    int Y;
    Bateau b;
    int (*positions)[20][20] = getAllPositions(j->grille);
    for(x=0; x<i; x++) {
        b = recupererBateau(listeBateaux, x);
        if(getCoord1X(b) == getCoord2X(b)) {
            if(getCoord1Y(b) == getCoord2Y(b) ) {
                return (positions[getCoord1X(b)][getCoord1Y(b)]);  // pourquoi return position ?
            }
            else if(getCoord1Y(b) > getCoord2Y(b)) {
                for(Y=getCoord2Y(b); Y<=getCoord1Y(b); Y++) {
                    if(positions[X][Y]==0) {
                        result = 1;
                    }
                }
            }
            else {
                for(Y=getCoord1Y(b);Y<=getCoord2Y(b);Y++) {
                    if(positions[X][Y]==0) {
                        result = 1;
                    }
                }
            }
        }
        else if(getCoord1Y(b) == getCoord2Y(b)){
            if(getCoord1X(b) > getCoord2X(b)) {
                for(X=getCoord2X(b);X<=getCoord1X(b); X++) {
                    if(positions[X][Y]==0) {
                        result = 1;
                    }
                }
            }
            else {
                for(X=getCoord1X(b);X<=getCoord2X(b); X++) {
                    if(positions[X][Y]) {
                        result = 1;
                    }
                }
            }
        }
    }
    return result;
}
























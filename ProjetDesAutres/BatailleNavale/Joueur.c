#include <stdlib.h>
#include <stdio.h>
#include "Joueur.h"
#include "Bateaux.h"
#include "Bateau.h"
#include "Grille.h"

/* Créer un joueur vide (sans bateau) avec seulement son numéro  */
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

/* Renvoie le numéro du joueur */
int getNumJoueur(Joueur j) {
    return j->numeroJoueur;
}

/* Définit le numéro du joueur */
void setNumJoueur(Joueur j, int numJoueur) {
    j->numeroJoueur = numjoueur;
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
bool estEnVie(Joueur j) {
    bool result = false;
    Bateaux listeBateaux = j->grille->bateaux->bateaux;
    Grille g = getGrilleJoueur(j);
    int i = nombreBateaux(listeBateaux);
    int x;
    int X;
    int Y;
    Bateau b;
    int compteur = 0;
    int[][] positions = j->grille->getAllPositions();
    for(x=0; x<i; x++) {
        b = recupererBateau(listeBateaux, x);
        if(b->getCoord1X() == b->getCoord2X()) {
            if(b->getCoord1Y() == b->getCoord2Y() ) {
                return (positions[b->getCoord1X()][b->getCoord1Y()]);
            }
            else if(b->getCoord1Y() > b->getCoord2Y()) {
                for(Y=b->getCoord2Y(); Y<=b->getCoord1Y(); Y++) {
                    if(positions[X][Y]==0) {
                        result = true;
                    }
                }
            }
            else {
                for(Y=b->getCoord1Y();Y<=b->getCoord2Y();Y++) {
                    if(positions[X][Y]==0) {
                        result = true;
                    }
                }
            }
        }
        else {
            if(b->getCoord1X() > b->getCoord2X()) {
                for(X=b->getCoord2X();X<=b->getCoord1X()) {
                    if(positions[X][Y]==0) {
                        result = true;
                    }
                }
            }
            else {
                for(X=b->getCoord1X();X<=b->getCoord2X()) {
                    if(positions[X][Y]) {
                        result = true;
                    }
                }
            }
        }
    }
}









































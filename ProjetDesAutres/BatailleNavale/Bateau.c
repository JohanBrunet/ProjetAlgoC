#include <stdlib.h>
#include <stdio.h>
#include "Bateau.h"

TBateau creerBateau() {
    Bateau bateau;
    return bateau;
}

int bateauVide(Bateau b) {
    int vide = 0;
    if (tailleBateau(b) == 0) {
        vide = 1;
    }
    return vide;
}

int tailleBateau(Bateau b) {
    return b.taille;
}

int setCoordDebut(Bateau b, int x, int y) {
    int done = 0;
    if (positionValide(x,y)) {
        b->pos1X = x;
        b->pos1Y = y;
        done = 1;
    }
    return done;
}

int setCoordFin(Bateau b, int x, int y) {
    int done = 0;
    if (positionValide(x,y)) {
        b->pos2X = x;
        b->pos2Y = y;
        done = 1;
    }
    return done;
}

// A dégager ensuite
/* RIEN A FAIRE LA ! */
Resultat coupAuBut(Bateau b, int x, int y);

int getCoord1X(Bateau b) {
    return this.pos1X;
}

int getCoord1X(Bateau b) {
    return this.pos1Y;
}

int getCoord2Y(Bateau b) {
    return this.pos2X;
}

int getCoord2X(Bateau b) {
    return this.pos2Y;
}


#include <stdlib.h>
#include <stdio.h>
#include "Bateau.h"


/*
    creerbateau : → TBateau
    Retourne le bateau vide :il n'a pas de coordonnées et n'est pas encore placé
    bateauVide renvoie True
*/
TBateau creerBateau() {
    return NULL;
}

Bateau bateauVide(Bateau b) {
    return b == NULL;
}

int tailleBateau(Bateau b) {
    return b.taille;
}

bool setCoordDebut(int x, int y) {
    this.pos1X = x;
    this.pos1Y = y;
}

bool setCoordFin(int x, int y) {
    this.pos2X = x;
    this.pos2Y = y;
}

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


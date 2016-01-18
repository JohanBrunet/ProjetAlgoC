#include <stdlib.h>
#include <stdio.h>
#include "Bateau.h"
#include "resultat.h"

Bateau creerBateau() {
    Bateau bateau = NULL;
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
    return b->taille;
}

int setCoordDebut(Bateau b, int x, int y) {
    int done = 0;
        b->pos1X = x;
        b->pos1Y = y;
        done = 1;
    return done;
}

int setCoordFin(Bateau b, int x, int y) {
    int done = 0;
        b->pos2X = x;
        b->pos2Y = y;
        done = 1;
    return done;
}

int getCoord1X(Bateau b) {
    return b->pos1X;
}

int getCoord1Y(Bateau b) {
    return b->pos1Y;
}

int getCoord2Y(Bateau b) {
    return b->pos2X;
}

int getCoord2X(Bateau b) {
    return b->pos2Y;
}


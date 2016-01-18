#include <stdlib.h>
#include <stdio.h>
#include "Resultat.h"
#include "Bateau.h"


/* Créer le résultat "coulé" */
Resultat creerCoule() {
    Resultat res;
    res->coule = 1;
    return res;
}

/* Créer le résultat "touché" */
Resultat creerTouche() {
    Resultat res = NULL;
    res->touche = 1;
    return res;
}

/* Créer le résultat "en Vue" */
Resultat creerEnVue() {
    Resultat res;
    res->enVue = 1;
    return res;
}

/* Créer le résultat "loupé" */
Resultat creerLoupe() {
    Resultat res;
    res->loupe = 1;
    return res;
}

/* Renvoie vrai (1=vrai,0=faux) si toutes les coordonnées du bateau ont été touché (si le bateau est vide) */
int estCoule(Bateau b) {
    return b->coule;
}

/* Renvoie vrai (1=vrai,0=faux) si une coordonnée d'un bateau se trouve sur la même colonne ou la même ligne que la position du tir sur la grille */
int estEnVue(int x, int y, Grille g) {
    return 1;
    //TODO
}

/* Renvoie vrai (1=vrai,0=faux) si une coordonnée d'un bateau est touchée par le tir */
int estTouche(int x, int y, Bateau b) {
    return 1;
    //TODO
}

/* Renvoie vrai (1=vrai,0=faux) si rien n'était à la position du tir ou autour(sur même ligne ou sur même colonne) */
int estLoupe(int x, int y, Bateau b) {
    return 1;
    //TODO
}

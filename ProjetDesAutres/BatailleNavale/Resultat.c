#include <stdlib.h>
#include <stdio.h>
#include "Resultat.h"
#include "Bateau.h"


/* Cr�er le r�sultat "coul�" */
Resultat creerCoule() {
    Resultat res;
    res->coule = 1;
    return res;
}

/* Cr�er le r�sultat "touch�" */
Resultat creerTouche() {
    Resultat res = NULL;
    res->touche = 1;
    return res;
}

/* Cr�er le r�sultat "en Vue" */
Resultat creerEnVue() {
    Resultat res;
    res->enVue = 1;
    return res;
}

/* Cr�er le r�sultat "loup�" */
Resultat creerLoupe() {
    Resultat res;
    res->loupe = 1;
    return res;
}

/* Renvoie vrai (1=vrai,0=faux) si toutes les coordonn�es du bateau ont �t� touch� (si le bateau est vide) */
int estCoule(Bateau b) {
    return b->coule;
}

/* Renvoie vrai (1=vrai,0=faux) si une coordonn�e d'un bateau se trouve sur la m�me colonne ou la m�me ligne que la position du tir sur la grille */
int estEnVue(int x, int y, Grille g) {
    return 1;
    //TODO
}

/* Renvoie vrai (1=vrai,0=faux) si une coordonn�e d'un bateau est touch�e par le tir */
int estTouche(int x, int y, Bateau b) {
    return 1;
    //TODO
}

/* Renvoie vrai (1=vrai,0=faux) si rien n'�tait � la position du tir ou autour(sur m�me ligne ou sur m�me colonne) */
int estLoupe(int x, int y, Bateau b) {
    return 1;
    //TODO
}

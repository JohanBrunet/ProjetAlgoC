#include <stdlib.h>
#include <stdio.h>
#include "Bateau.h"
#include "Grille.h"
#include "Bateaux.h"
#ifndef RESULTAT_H
#define RESULTAT_H



/* Structure qui permet d'afficher un résultat ("touché","coulé","en Vue","loupé") et de poursuivre le déroulement du jeu */
typedef struct TResultat {
    int coule;
    int enVue;
    int touche;
    int loupe;
} TResultat;
typedef TResultat* Resultat;

/* Créer le résultat "coulé" */
Resultat creerCoule();

/* Créer le résultat "touché" */
Resultat creerTouche();

/* Créer le résultat "en Vue" */
Resultat creerEnVue();

/* Créer le résultat "loupé" */
Resultat creerLoupe();

/* Renvoie vrai (1=vrai,0=faux) si toutes les coordonnées du bateau ont été touché (si le bateau est vide) */
int estCoule(Bateau b);

/* Renvoie vrai (1=vrai,0=faux) si une coordonnée d'un bateau se trouve sur la même colonne ou la même ligne que la position du tir sur la grille */
int estEnVue(int x, int y, Grille g);

/* Renvoie vrai (1=vrai,0=faux) si une coordonnée d'un bateau est touchée par le tir */
int estTouche(int x, int y, Bateau b);

/* Renvoie vrai (1=vrai,0=faux) si rien n'était à la position du tir ou autour(sur même ligne ou sur même colonne) */
int estLoupe(int x, int y, Bateau b);

#endif

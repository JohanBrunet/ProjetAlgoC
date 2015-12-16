#include <stdlib.h>
#include <stdio.h>
#ifndef RESULTAT_H
#define RESULTAT_H
#include "Bateau.h"

/* Structure qui permet d'afficher un résultat ("touché","coulé","en Vue","loupé") et de poursuivre le déroulement du jeu */
typedef struct TResultat TResultat ;
typedef TResultat* Resultat;

/* Créer le résultat "coulé" */
Resultat creer_coule();

/* Créer le résultat "touché" */
Resultat creer_touche();

/* Créer le résultat "en Vue" */
Resultat creer_enVue();

/* Créer le résultat "loupé" */
Resultat creer_loupe();

/* Renvoie vrai (1=vrai,0=faux) si toutes les coordonnées du bateau ont été touché (si le bateau est vide) */
int est_coule(Bateau b);

/* Renvoie vrai si une coordonnée d'un bateau se trouve sur la même colonne ou la même ligne que la position du tir sur la grille */
int est_enVue(int x,int y);

/* Renvoie vrai si une coordonnée d'un bateau est touchée par le tir */
int est_touche(Bateau b);

/* Renvoie vrai si rien n'était à la position du tir ou autour(sur même ligne ou sur même colonne) */
int est_loupe(Bateau b);

#endif

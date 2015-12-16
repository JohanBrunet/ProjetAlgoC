#include <stdlib.h> 
#include <stdio.h> 
#ifndef RESULTAT_H
#define RESULTAT_H
#include "Bateau.h"

typedef struct TResultat TResultat ;/*structure qui permet d'afficher un résultat ("touché","coulé","en Vue","loupé") et de poursuivre le déroulement du jeu*/
typedef TResultat* Resultat;


Resultat creer_coule();
/*créer le résultat "coulé"*/
Resultat creer_touche();
/*créer le résultat "touché"*/
Resultat creer_enVue();
/*créer le résultat "en Vue"*/
Resultat creer_loupe();
/*créer le résultat "loupé"*/
int est_coule(Bateau b);
/*renvoie vrai (1=vrai,0=faux) si toutes les coordonnées du bateau ont été touché (si le bateau est vide)*/
int est_enVue(int x,int y);
/*renvoie vrai si une coordonnée d'un bateau se trouve sur la même colonne ou la même ligne que la position du tir sur la grille*/
int est_touche(Bateau b);
/*renvoie vrai si une coordonnée d'un bateau est touchée par le tir*/
int est_loupe(Bateau b);
/*renvoie vrai si rien n'était à la position du tir ou autour(sur même ligne ou sur même colonne)*/
#endif

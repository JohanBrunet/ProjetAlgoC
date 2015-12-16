#include <stdlib.h>
#include <stdio.h>
#ifndef BATEAU_H
#define BATEAU_H
#include "resultat.h"

/* Structure qui contient les positions d'un bateau (ses coordonnées) */
typedef struct TBateau TBateau;
typedef TBateau* Bateau;

/* Créer un bateau vide (sans coordonnées) qui n'est pas encore placé */
Bateau Creer_bateau();

/* Renvoie vrai (1=vrai,0=faux) si le bateau est vide (plus aucune coordonnées) */
int bateau_vide(Bateau b);

/* Renvoie la taille d'un bateau (nombre de coordonnées d'un bateau) */
int taille_bateau(Bateau b);

/* Renvoie un résultat en fonction du tir et de la grille, ce résultat est soit "touché","coulé","enVue","loupé" */
Resultat coup_au_but(Bateau b,int x,int y);

#endif



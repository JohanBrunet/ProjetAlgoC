#include <stdlib.h>
#include <stdio.h>
#ifndef BATEAU_H
#define BATEAU_H
#include "resultat.h"

/* Structure qui contient les positions d'un bateau (ses coordonnées) */
typedef struct TBateau TBateau {
    int taille;
    int pos1X;
    int pos1Y;
    int pos2X;
    int pos2Y;
}
typedef TBateau* Bateau;


/* Créer un bateau vide (sans coordonnées) qui n'est pas encore placé */
Bateau CreerBateau();

/* Renvoie vrai (1=vrai,0=faux) si le bateau est vide (plus aucune coordonnées) */
int bateauVide(Bateau b);

/* Renvoie la taille d'un bateau (nombre de coordonnées d'un bateau) */
int tailleBateau(Bateau b);

/* Définit les coordonnées du point

/* Renvoie un résultat en fonction du tir et de la grille, ce résultat est soit "touché","coulé","enVue","loupé" */
Resultat coupAuBut(Bateau b,int x,int y);

#endif



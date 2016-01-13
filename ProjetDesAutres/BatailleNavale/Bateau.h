#include <stdlib.h>
#include <stdio.h>
#ifndef BATEAU_H
#define BATEAU_H
#include "Resultat.h"

/* Structure qui contient les positions d'un bateau (ses coordonnées) */
typedef struct TBateau TBateau {
    int taille;
    int pos1X;
    int pos1Y;
    int pos2X;
    int pos2Y;
}typedef TBateau* Bateau;

/* Créer un bateau vide (sans coordonnées) qui n'est pas encore placé */
Bateau creerBateau();

/* Renvoie vrai (1=vrai,0=faux) si le bateau est vide (plus aucune coordonnées) */
int bateauVide(Bateau b);

/* Renvoie la taille d'un bateau (nombre de coordonnées d'un bateau) */
int tailleBateau(Bateau b);

/* Définit les coordonnées des extrémités du bateau
Vérifie la conformité des coordonnées */
bool setCoord1(int x, int y);
bool setCoord2(int x, int y);

<<<<<<< HEAD
=======
int getCoord1X(Bateau b);
int getCoord1X(Bateau b);
int getCoord2Y(Bateau b);
int getCoord2X(Bateau b);


>>>>>>> origin/master
// RIEN A FAIRE LA
/* Renvoie un résultat en fonction du tir et de la grille, ce résultat est soit "touché","coulé","enVue","loupé" */
Resultat coupAuBut(Bateau b,int x,int y);

#endif



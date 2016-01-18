#include <stdlib.h>
#include <stdio.h>
#ifndef BATEAU_H
#define BATEAU_H

/* Structure qui contient les positions d'un bateau (ses coordonnées) */
struct TBateau {
	int taille;
	int coule;
	int pos1X;
	int pos1Y;
	int pos2X;
	int pos2Y;
};
typedef struct TBateau* Bateau;

/* Créer un bateau vide (sans coordonnées) qui n'est pas encore placé */
Bateau creerBateau();

/* Renvoie vrai (1=vrai,0=faux) si le bateau est vide (plus aucune coordonnées) */
int bateauVide(Bateau b);

/* Renvoie la taille d'un bateau (nombre de coordonnées d'un bateau) */
int tailleBateau(Bateau b);

/* Définit les coordonnées des extrémités du bateau
Vérifie la conformité des coordonnées */
int setCoord1(Bateau b, int x, int y);
int setCoord2(Bateau b, int x, int y);

/* Obtenir la coordonnée du début du bateau */
int getCoord1X(Bateau b);
int getCoord1Y(Bateau b);
/* Obtenir la coordonnée de la fin du bateau */
int getCoord2X(Bateau b);
int getCoord2Y(Bateau b);

#endif



#include <stdlib.h>
#include <stdio.h>
#ifndef GRILLE_H
#define GRILLE_H
#include "Bateau.h"
#include "Bateaux.h"

/* Structure qui permet de positionner les bateaux et vérifier le résultat d'un tir */
typedef struct TGrille {
	int nbColonnes;
	int nbLignes;
	Bateaux bateaux;
	int positions[20][20];
	int positionDejaVisee[20][20];
} TGrille;
typedef TGrille* Grille;

/* Créer un grille vide (sans bateau) en spécifiant ses dimensions.
Vérifie si les dimensions sont positives et au minimum 5x5 */
Grille creerGrille(int largeur, int hauteur);

/* Renvoie le nombre de colonnes de la grille */
int nbColonneGrille(Grille g);

/* Renvoie le nombre de lignes de la grille */
int nbLigneGrille(Grille g);

/* Renvoie vrai (1=vrai,0=faux) si la grille est vide (sans bateau) */
int estVide(Grille g);

/* Renvoie vrai (1=vrai,0=faux) si la position du tir est bien dans la grille */
int positionValide(Grille g,int x,int y);

/* Renvoie vrai (1=vrai,0=faux) s'il y a un bateau qui occupe les coordonnées du tir */
int positionOccupee(Grille g,int x,int y);

/* Renvoie vrai (1=vrai,0=faux) si la position a déjà été tirée */
int positionDejaVisee(Grille g, int x, int y);

/* Renvoie le bateau qui occupe la position du tir */
Bateau bateauSousTir(Grille g,int x,int y);

/* Supprime la position qui a été tirée de la grille et renvoie cette grille sans la position */
Grille supprimerPosition(Grille g,int x,int y);

/* Ajoute la position dans la grille et renvoie la grille */
Grille ajouterPosition(Grille g, int x, int y);

/* Ajoute toutes les positions */
Grille createAllPositions(Grille g);

// Renvoie le tableau de positions
int getAllPositions(Grille g);

// Renvoie la position du bateau passé en parametre
int getPosFromBateau(Grille g, Bateau b);

#endif


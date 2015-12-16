#include <stdlib.h>
#include <stdio.h>
#ifndef GRILLE_H
#define GRILLE_H
#include "Joueur.h"
#include "Bateau.h"

/* Structure qui permet de positionner les bateaux et vérifier le résultat d'un tir */
typedef struct TGrille TGrille ;
typedef TGrille* Grille;

/* Créer un grille vide (sans bateau) */
Grille Creer_grille();

/* Renvoie le nombre de colonnes de la grille */
int dimension_colonne_grille(Grille g);

/* Renvoie le nombre de lignes de la grille */
int dimension_ligne_grille(Grille g);

/* Renvoie vrai (1=vrai,0=faux) si la grille est vide (sans bateau) */
int estVide_grille(Grille g);

/* Renvoie vrai si la position du tir est bien dans la grille */
int positionValide(Grille g,int x,int y);

/* Renvoie vrai s'il y a un bateau qui occupe les coordonnées du tir */
int positionOccupee(Grille g,int x,int y);

/* Donne le joueur (caractérisé par son numéro) à qui appartient la grille de bateaux */
Joueur GrilleAppartient(Grille g);

/* Renvoie vrai si la position a déjà été tirée */
int positionDejaVisee(int x,int y);

/* Renvoie le bateau qui occupe la position du tir */
Bateau bateau_sous_tir(Grille g,int x,int y);

/* Supprime la position qui a été tirée de la grille et renvoie cette grille sans la position */
Grille retirer_position(Grille g,int x,int y);

#endif


#include <stdlib.h> 
#include <stdio.h> 
#ifndef GRILLE_H
#define GRILLE_H
#include "Joueur.h"
#include "Bateau.h"

typedef struct TGrille TGrille ; /*structure qui permet de positionner les bateaux et vérifier le résultat d'un tir*/
typedef TGrille* Grille;

Grille Creer_grille();
/*créer un grille vide (sans bateau)*/
int dimension_colonne_grille(Grille g);
/*renvoie le nombre de colonnes de la grille*/
int dimension_ligne_grille(Grille g);
/*renvoie le nombre de lignes de la grille*/
int estVide_grille(Grille g);
/*renvoie vrai (1=vrai,0=faux) si la grille est vide (sans bateau)*/
int positionValide(Grille g,int x,int y);
/*renvoie vrai si la position du tir est bien dans la grille*/
int positionOccupee(Grille g,int x,int y);
/*renvoie vrai s'il y a un bateau qui occupe les coordonnées du tir*/
Joueur GrilleAppartient(Grille g);
/*donne le joueur (caractérisé par son numéro) à qui appartient la grille de bateaux*/
int positionDejaVisee(int x,int y);
/*renvoie vrai si la position a déjà été tirée*/
Bateau bateau_sous_tir(Grille g,int x,int y);
/*renvoie le bateau qui occupe la position du tir*/
Grille retirer_position(Grille g,int x,int y);
/*supprime la position qui a été tirée de la grille et renvoie cette grille sans la position*/


#endif
 

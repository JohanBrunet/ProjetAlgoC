#include <stdlib.h>
#include <stdio.h>
#ifndef GRILLE_H
#define GRILLE_H
#include "Joueur.h"
#include "Bateau.h"

/* Structure qui permet de positionner les bateaux et vérifier le résultat d'un tir */
typedef struct TGrille TGrille{
	int nbColonnes;
	int nbLignes;
	Bateau[] bateaux;
	int[][] positions;
	int[][] positionDejaVisee;
	Joueur joueur;
}typedef TGrille* Grille;

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

/* Donne le joueur (caractérisé par son numéro) à qui appartient la grille de bateaux */
Joueur grilleAppartient(Grille g);

/* Renvoie vrai (1=vrai,0=faux) si la position a déjà été tirée */
int positionDejaVisee(int x,int y);

/* Renvoie le bateau qui occupe la position du tir */
Bateau bateauSousTir(Grille g,int x,int y);

/* Supprime la position qui a été tirée de la grille et renvoie cette grille sans la position */
Grille retirerPosition(Grille g,int x,int y);

#endif


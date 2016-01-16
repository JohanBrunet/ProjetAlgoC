#include <stdlib.h>
#include <stdio.h>
#include "Grille.h"
#include "Bateaux.h"
#include "Bateau.h"

/* Créer un grille vide (sans bateau) en spécifiant ses dimensions.
Vérifie si les dimensions sont positives et au minimum 5x5 */
Grille creerGrille(int largeur, int hauteur){
	Grille grille;
	grille->nbColonnes = largeur;
	grille->nbLignes = hauteur;
	return grille;
}

/* Renvoie le nombre de colonnes de la grille */
int nbColonneGrille(Grille g){
	return g.nbColonnes;
}

/* Renvoie le nombre de lignes de la grille */
int nbLigneGrille(Grille g){
	return g.nbLignes;
}

/* Renvoie vrai (1=vrai,0=faux) si la grille est vide (sans bateau) */
int estVide(Grille g){
	if (sizeof(g->bateaux->bateaux) == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

/* Renvoie vrai (1=vrai,0=faux) si la position du tir est bien dans la grille */
int positionValide(Grille g, int x, int y){
	if ((x <= g->nbLignes) && (y <= g->nbColonnes)) {
		return 1;
	}
	else {
		return 0;
	}
}

/* Renvoie vrai (1=vrai,0=faux) s'il y a un bateau qui occupe les coordonnées du tir */
int positionOccupee(Grille g, int x, int y){
    return g->positions[x][y] == void;
}

/* Donne le joueur (caractérisé par son numéro) à qui appartient la grille de bateaux */
Joueur grilleAppartient(Grille g){
	return g->joueur;
}

/* Renvoie vrai (1=vrai,0=faux) si la position a déjà été tirée */
int positionDejaVisee(Grille g, int x, int y){
	if (g->positionDejaVisee[x][y] != NULL) {
		return 1;
	}
	else {
		return 0;
	}
}

/* Renvoie le bateau qui occupe la position du tir */
Bateau bateauSousTir(Grille g, int x, int y){
	if (positionValide(x,y)) {
		if (!positionOccupee(g,x,y)) {
			return NULL;
		}
		else {
			//TODO
		}
	}
}

/* Supprime la position qui a été tirée de la grille et renvoie cette grille sans la position */
Grille ajouterPosition(Grille g, int x, int y){
	if (!positionValide(x,y)) {
		printf("%s\n", "Position non valide !");
	}
	else if (positionOccupee(x,y)) {
		printf("%s\n", "Position occupée !");
	}
	else {
		g->positions[x][y] = 0;
	}
}

/* Ajoute toutes les positions */
void createAllPositions(Grille g) {
    int x = g->nbColonnes;
    int y = g->nbLignes;
    int cptX;
    int cptY;
    for(cptX=0;cptX<x;cptX++) {
        for(cptY=0;cptY<y; cptY++) {
            ajouterPosition(g, cptX, cptY)
        }
    }
}
// Renvoie le tableau de positions
int[][] getAllPositions(Grille g) {
    return g->positions
}

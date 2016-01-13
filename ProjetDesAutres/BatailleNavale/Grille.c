#include <stdlib.h>
#include <stdio.h>
#include <Grille.h>

/* Créer un grille vide (sans bateau) en spécifiant ses dimensions.
Vérifie si les dimensions sont positives et au minimum 5x5 */
Grille creerGrille(int largeur, int hauteur){
	Grille grille;
	grille -> nbColonnes = largeur;
	grille -> nbLignes = hauteur;
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
	if (sizeof(g->bateaux) == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

/* Renvoie vrai (1=vrai,0=faux) si la position du tir est bien dans la grille */
int positionValide(Grille g,int x,int y){
	if ((x <= g->nbLignes) && (y <= g->nbColonnes)) {
		return 1;
	}
	else {
		return 0;
	}
}

/* Renvoie vrai (1=vrai,0=faux) s'il y a un bateau qui occupe les coordonnées du tir */
int positionOccupee(Grille g,int x,int y){
	int i;
	for (i = 0, i <= sizeof(g->bateaux), i++) {
		int j;
		for (j = g->bateaux[i].getCoord1X(), i <= g->bateaux[i].getCoord2X, j++) {
			int k;
			for (k = g->bateaux[i].getCoord1Y, i <= g->bateaux[i].getCoord2Y, k++) {
				if (x == j && y == k) {
					return 1;
				}
				else {
					return 0;
				}
			}
		}
	}
}

/* Donne le joueur (caractérisé par son numéro) à qui appartient la grille de bateaux */
Joueur grilleAppartient(Grille g){
	return g->joueur;
}

/* Renvoie vrai (1=vrai,0=faux) si la position a déjà été tirée */
int positionDejaVisee(Grille g, int x,int y){
	if (g->positionDejaVisee[x][y] != NULL) {
		return 1;
	}
	else {
		return 0;
	}
}

/* Renvoie le bateau qui occupe la position du tir */
Bateau bateauSousTir(Grille g,int x,int y){
	if (positionOccupee(g,x,y) == 0) {
		return NULL;
	}
	else {
		//TODO
	}
}

/* Supprime la position qui a été tirée de la grille et renvoie cette grille sans la position */
Grille retirerPosition(Grille g,int x,int y){
	if (positionValide(x,y) == 0) {
		printf("%s\n", "Position non valide !");
	}
	else if (positionOccupee(x,y) == 1) {
		printf("%s\n", "Position occupée !");
	}
	else {
		g->positions[x][y] = NULL;
	}
}
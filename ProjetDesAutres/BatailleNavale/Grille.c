#include <stdlib.h>
#include <stdio.h>
#include "Grille.h"
#include "Bateaux.h"
#include "Bateau.h"
#include "Joueur.h"

/* Créer un grille vide (sans bateau) en spécifiant ses dimensions.
Vérifie si les dimensions sont positives et au minimum 5x5 */
Grille creerGrille(int largeur, int hauteur) {
	Grille grille;
	grille->nbColonnes = largeur;
	grille->nbLignes = hauteur;
	createAllPositions(g);
	return grille;
}

/* Renvoie le nombre de colonnes de la grille */
int nbColonneGrille(Grille g){
	return g.nbColonnes;
}

/* Renvoie le nombre de lignes de la grille */
int nbLigneGrille(Grille g) {
	return g.nbLignes;
}

/* Renvoie vrai (1=vrai,0=faux) si la grille est vide (sans bateau) */
int estVide(Grille g) {
	if (sizeof(g->bateaux->bateaux) == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

/* Renvoie vrai (1=vrai,0=faux) si la position du tir est bien dans la grille */
int positionValide(Grille g, int x, int y) {
	if ((x <= g->nbLignes) && (y <= g->nbColonnes)) {
		return 1;
	}
	else {
		return 0;
	}
}

/* Renvoie vrai (1=vrai,0=faux) s'il y a un bateau qui occupe les coordonnées du tir */
int positionOccupee(Grille g, int x, int y) {
    return g->positions[x][y] == void;
}

/* Renvoie vrai (1=vrai,0=faux) si la position a déjà été tirée */
int positionDejaVisee(Grille g, int x, int y) {
	if (g->positionDejaVisee[x][y] != NULL) {
		return 1;
	}
	else {
		return 0;
	}
}

/* Renvoie le bateau qui occupe la position du tir */
Bateau bateauSousTir(Grille g, int x, int y) {
	if (positionValide(x,y)) {
		if (!positionOccupee(g,x,y)) {
			return NULL;
		}
		else {
			bool result = false;
            Bateaux listeBateaux = j->grille->bateaux->bateaux;
            Grille g = getGrilleJoueur(j);
            int i = nombreBateaux(listeBateaux);
            int X;
            int Y;
            Bateau b;
            for(x=0; x<i; x++) {
                b = recupererBateau(listeBateaux, x);
                if(b->getCoord1X() == b->getCoord2X() && b->getCoord1X==x) {
                    if(b->getCoord1Y() == b->getCoord2Y() && b->getCoord1Y()==y) {
                        return b;
                    }
                    else if(b->getCoord1Y() > b->getCoord2Y()) {
                        for(Y=b->getCoord2Y(); Y<=b->getCoord1Y(); Y++) {
                            if(y==Y) {
                                return b;
                            }
                        }
                    }
                    else {
                        for(Y=b->getCoord1Y();Y<=b->getCoord2Y();Y++) {
                            if(y==Y) {
                                return b;
                            }
                        }
                    }
                }
                else if(b->getCord1Y() == b->getCoord2Y(){
                    if(b->getCoord1X() > b->getCoord2X()) {
                        for(X=b->getCoord2X();X<=b->getCoord1X()) {
                            if(x==X && y = b->getCoord1Y()) {
                                return b;
                            }
                        }
                    }
                    else {
                        for(X=b->getCoord1X();X<=b->getCoord2X()) {
                            if(x==X && y==b->getCoord1Y()) {
                                return b;
                            }
                        }
                    }
                }
            }
		}
	}
}

/* Supprime la position qui a été tirée de la grille et renvoie la grille */
Grille supprimerPosition(Grille g, int x, int y) {
	if (!positionValide(x,y)) {
		printf("%s\n", "Position non valide !");
	}
	else if (positionOccupee(x,y)) {
		printf("%s\n", "Position occupée !");
	}
	else {
		g->positions[x][y] = 0;
	}
	return g;
}

/* Ajoute la position dans la grille et renvoie la grille */
Grille ajouterPosition(Grille g, int x, int y) {
	if (!positionValide(x,y)) {
		printf("%s\n", "Position non valide !");
	}
	else {
		g->positions[x][y] = 0;
	}
	return g;
}

/* Ajoute toutes les positions */
void createAllPositions(Grille g) {
    int x = g->nbColonnes;
    int y = g->nbLignes;
    int cptX;
    int cptY;
    for(cptX=0; cptX < x; cptX++) {
        for(cptY=0; cptY < y; cptY++) {
            ajouterPosition(g, cptX, cptY)
        }
    }
}

// Renvoie le tableau de positions
int[][] getAllPositions(Grille g) {
    return g->positions
}

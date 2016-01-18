#include <stdlib.h>
#include <stdio.h>
#include "Grille.h"
#include "Bateaux.h"
#include "Bateau.h"
#include "Joueur.h"

/* Créer un grille vide (sans bateau) en spécifiant ses dimensions.
Vérifie si les dimensions sont positives et au minimum 5x5 */
Grille creerGrille(int largeur, int hauteur) {
    // affichage de debug
    printf("Creation de la grille\n");
	Grille grille = (Grille) malloc(sizeof(Grille));
	grille->nbColonnes = largeur;
	grille->nbLignes = hauteur;
	// affichage de debug
	printf("Dimensions intialisees\n");
	createAllPositions(grille);
	// affichage de debug
	printf("Grille cree\n");
	return grille;
}

/* Renvoie le nombre de colonnes de la grille */
int nbColonneGrille(Grille g){
	return g->nbColonnes;
}

/* Renvoie le nombre de lignes de la grille */
int nbLigneGrille(Grille g) {
	return g->nbLignes;
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
    if(g->positions[x][y] == 0) {
        return 0;
    }
    else {
        return 1;
    }
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

// PROBLEME : cette fonction renvoie tjs b mais on ne le modifie jamais...

/* Renvoie le bateau qui occupe la position du tir */
Bateau bateauSousTir(Grille g, int x, int y) {
	if (positionValide(g,x,y)) {
		if (!positionOccupee(g,x,y)) {
			return NULL;
		}
		else {
            Bateaux listeBateaux = g->bateaux->bateaux;
            int i = nombreBateaux(listeBateaux);
            int X;
            int Y;
            Bateau b;
            for(x=0; x<i; x++) {
                b = recupererBateau(listeBateaux, x);
                if(getCoord1X(b) == getCoord2X(b) && getCoord1X(b)==x) {
                    if(getCoord1Y(b) == getCoord2Y(b) && getCoord1Y(b)==y) {
                        return b;
                    }
                    else if(getCoord1Y(b) > getCoord2Y(b)) {
                        for(Y=getCoord2Y(b); Y<=getCoord1Y(b); Y++) {
                            if(y==Y) {
                                return b;
                            }
                        }
                    }
                    else {
                        for(Y=getCoord1Y(b);Y<=getCoord2Y(b);Y++) {
                            if(y==Y) {
                                return b;
                            }
                        }
                    }
                }
                else if(getCoord1Y(b) == getCoord2Y(b)){
                    if(getCoord1X(b) > getCoord2X(b)) {
                        for(X=getCoord2X(b);X<=getCoord1X(b);X++) {
                            if(x==X && y==getCoord1Y(b)) {
                                return b;
                            }
                        }
                    }
                    else {
                        for(X=getCoord1X(b);X<=getCoord2X(b); X++) {
                            if(x==X && y==getCoord1Y(b)) {
                                return b;
                            }
                        }
                    }
                }
            }
            return b;
		}
	}
}

/* Supprime la position qui a été tirée de la grille et renvoie la grille */
Grille supprimerPosition(Grille g, int x, int y) {
	if (!positionValide(g,x,y)) {
		printf("%s\n", "Position non valide !");
	}
	else if (positionOccupee(g,x,y)) {
		printf("%s\n", "Position occupée !");
	}
	else {
		g->positions[x][y] = 0;
	}
	return g;
}

/* Ajoute la position dans la grille et renvoie la grille */
Grille ajouterPosition(Grille g, int x, int y) {
	if (!positionValide(g,x,y)) {
		printf("%s\n", "Position non valide !");
	}
	else {
		g->positions[x][y] = 0;
	}
	return g;
}

/* Ajoute toutes les positions */
Grille createAllPositions(Grille g) {
    int x = g->nbColonnes;
    int y = g->nbLignes;
    int cptX;
    int cptY;
    for(cptX=0; cptX < x; cptX++) {
        for(cptY=0; cptY < y; cptY++) {
            g = ajouterPosition(g, cptX, cptY);
        }
    }
    return g;
}

// Renvoie le tableau de positions
int getAllPositions(Grille g) {
    return g->positions;
}


// Renvoie la position du bateau passé en parametre
int getPosFromBateau(Grille g, Bateau b) {
    Bateaux bx = g->bateaux;
    int i;
    for(i=0;i<5;i++) {
        if(getCoord1X(bx->bateaux[i]) == getCoord1X(b)) {
            return i;
        }
    }
}

#include <stdlib.h>
#include <stdio.h>
#include "Bateaux.h"
#include "Bateau.h"
/* Créer un ensemble de bateaux vide (sans bateaux, les bateaux ne sont pas encore placés)  */
Bateaux creerBateaux() {
	Bateaux bateaux = (Bateaux) malloc(sizeof(Bateaux));
	return bateaux;
}

/* Ajoute à la suite un bateau (ensemble de coordonnées) dans l'ensemble des Bateaux */
Bateaux ajouterBateau(Bateaux bx, Bateau b, int position) {
	bx->bateaux[position] = b;
	return bx;
}

/* Supprime un bateau de l'ensemble des Bateaux si celui-ci est vide */
Bateaux supprimerBateau(Bateaux bx, int indice) {
	/* On vérifie que l'indice donné correspond à une case du tableau */
	if (indice < sizeof(bx)) {
		bx->bateaux[indice] = NULL;
	}
	else {
		printf("Indice hors du tableau !");
	}
	return bx;
}

/* Renvoie le nombre de bateaux dans l'ensemble Bateaux */
int nombreBateaux(Bateaux bx) {
	int nbBateaux = 0;
	int i;
	for (i = 0; i < sizeof(bx); i++) {
 		if (bateauVide(recupererBateau(bx, i))) {
			nbBateaux++;
		}
	}
	return nbBateaux;
}

/* Cherche dans l'ensemble des Bateaux le bateau dont l'indice est passé en paramètre */
Bateau recupererBateau(Bateaux bx, int indice) {
	/* On vérifie que l'indice donné correspond à une case du tableau */
	if (indice < sizeof(bx)) {
		bx->bateaux[indice] = NULL;
	}
	else {
		printf("Indice hors du tableau !");
	}
	return bx->bateaux[indice];
}

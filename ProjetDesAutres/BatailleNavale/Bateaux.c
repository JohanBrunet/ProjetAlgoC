#include <stdlib.h>
#include <stdio.h>
#include "Bateaux.h"

/* Créer un ensemble de bateaux vide (sans bateaux, les bateaux ne sont pas encore placés)  */
Bateaux creerBateaux() {
	Bateaux bateaux;
	return bateaux;
}

/* Ajoute à la suite un bateau (ensemble de coordonnées) dans l'ensemble des Bateaux */
Bateaux ajouterBateau(Bateaux bx, Bateau b) {
	//TODO ajouter un bateau b à la liste bx
	return bx;
}

/* Supprime un bateau de l'ensemble des Bateaux si celui-ci est vide */
Bateaux supprimerBateau(Bateaux bx, int indice) {
	bx->bateaux[indice] = NULL;
	return bx;
}

/* Renvoie le nombre de bateaux dans l'ensemble Bateaux (la taille de l'ensemble) */
int nombreBateaux(Bateaux bx) {
	return sizeof(bx->bateaux);
}

/* Cherche dans l'ensemble des Bateaux le bateau donné en paramètre (ses coordonnées) et le renvoie s'il appartient à l'ensemble sinon "ce bateau a été coulé" */
Bateau recupererBateau(Bateaux bx, int indice) {
	//TODO récuérer un bateau b dans la liste bx
	return bx->bateaux[indice];
}
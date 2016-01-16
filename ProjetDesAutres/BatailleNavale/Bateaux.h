#include <stdlib.h>
#include <stdio.h>
#ifndef  BATEAUX_H
#define BATEAUX_H
#include "Bateau.h"

/* Structure qui définit un ensemble de bateaux */
typedef struct TBateaux TBateaux {
	Bateau[] bateaux;
}typedef TBateaux* Bateaux;

/* Créer un ensemble de bateaux vide (sans bateaux, les bateaux ne sont pas encore placés)  */
Bateaux creerBateaux();

/* Ajoute à la suite un bateau (ensemble de coordonnées) dans l'ensemble des Bateaux */
Bateaux ajouterBateau(Bateaux bx, Bateau b);

/* Supprime un bateau de l'ensemble des Bateaux si celui-ci est vide */
Bateaux supprimerBateau(Bateaux bx, Bateau b);

/* Renvoie le nombre de bateaux dans l'ensemble Bateaux (la taille de l'ensemble) */
int nombreBateaux(Bateaux bx);

/* Cherche dans l'ensemble des Bateaux le bateau donné en paramètre (ses coordonnées) et le renvoie s'il appartient à l'ensemble sinon "ce bateau a été coulé" */
Bateau recupererBateau(Bateaux bx, int indice);

#endif

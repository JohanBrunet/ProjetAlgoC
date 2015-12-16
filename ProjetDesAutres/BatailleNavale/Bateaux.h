#include <stdlib.h> 
#include <stdio.h> 
#ifndef  BATEAUX_H
#define BATEAUX_H
#include "Bateau.h"

typedef struct TBateaux TBateaux;/*structure qui définit un ensemble de bateaux*/
typedef TBateaux* Bateaux;


Bateaux Creer_bateaux();
/*créer un ensemble de bateaux vide (sans bateaux, les bateaux ne sont pas encore placés) */
Bateaux ajouter_bateau(Bateau b);
/*ajoute à la suite un bateau (ensemble de coordonnées) dans l'ensemble des Bateaux*/
Bateaux supprimer_bateau(Bateaux bx,Bateau b);
/*supprime un bateau de l'ensemble des Bateaux si celui-ci est vide*/
int nombre_bateaux(Bateaux bx);
/*renvoie le nombre de bateaux dans l'ensemble Bateaux (la taille de l'ensemble)*/
Bateau recuperer_bateau(Bateaux bx,Bateau b);
/*cherche dans l'ensemble des Bateaux le bateau donné en paramètre (ses coordonnées) et le renvoie s'il appartient à l'ensemble sinon "ce bateau a été coulé"*/

#endif

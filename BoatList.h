#ifndef BOATLIST_H
#define BOATLIST_H
#include "Position.h"

typedef struct BoatList BoatList;

BoatList createBoatList(); // Cr�e une liste de bateaux vide
Boat addBoat(Boat boat); // Ajoute un bateau a la liste de bateaux
bool removeBoat(Boat boat); // Retire un bateau pass� en param�tre � la liste
int getLength(); // Renvoie le nombre de bateaux pr�sents dans la liste
Boat getBoat(int numBoat); // Renvoie un bateau de la liste depuis son num�ro dans la liste
bool boatAllPlaced(); // Renvoie Vrai si tous les bateaux de la liste sont plac�e, False sinon
bool boatAllDead(); // Renvoie vrai si tous les bateaux de la liste sont morts, false sinon.

#endif // BOATLIST_H

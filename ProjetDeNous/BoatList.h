#ifndef BOATLIST_H
#define BOATLIST_H
#include "Position.h"

typedef struct BoatList BoatList;

BoatList createBoatList(); // Crée une liste de bateaux vide
Boat addBoat(Boat boat); // Ajoute un bateau a la liste de bateaux
bool removeBoat(Boat boat); // Retire un bateau passé en paramètre à la liste
int getLength(); // Renvoie le nombre de bateaux présents dans la liste
Boat getBoat(int numBoat); // Renvoie un bateau de la liste depuis son numéro dans la liste
bool boatAllPlaced(); // Renvoie Vrai si tous les bateaux de la liste sont placée, False sinon
bool boatAllDead(); // Renvoie vrai si tous les bateaux de la liste sont morts, false sinon.

#endif // BOATLIST_H

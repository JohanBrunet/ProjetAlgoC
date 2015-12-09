#ifndef BOATLIST_H
#define BOATLIST_H
#include "Position.h"

typedef struct BoatList BoatList;

Boat addBoat(Boat boat);
bool removeBoat(Boat boat);
int getLength();
Boat getBoat(int numBoat);
bool boatAllPlaced();
bool boatAllDead();

#endif // BOATLIST_H

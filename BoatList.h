#ifndef BOATLIST_H_INCLUDED
#define BOATLIST_H_INCLUDED

typedef struct BoatList BoatList;
struct BoatList {
    Boat[] boatList;
};

Boat addBoat(Boat boat);
bool removeBoat(Boat boat);
int getLength();
Boat getBoat(int numBoat);
bool boatAllPlaced();
bool boatAllDead();

#endif // BOATLIST_H_INCLUDED

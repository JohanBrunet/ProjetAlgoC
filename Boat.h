#ifndef BATEAU_H_INCLUDED
#define BATEAU_H_INCLUDED
#include "Position.h"
#include "Boat.h""
typedef struct Boat Boat;

Boat createBoat(Position startPos, Position endPos);
int getSize();
bool isDead();
bool isPLaced();
Position getStart();
Position getEnd();
Position[] getPosList();

#endif // BATEAU_H_INCLUDED

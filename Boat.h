#ifndef BATEAU_H
#define BATEAU_H
#include "Position.h"
#include "Boat.h"

typedef struct Boat Boat;       /* Type Bateau */

Boat createBoat(Position startPos, Position endPos);
int getSize();
bool isDead();
bool isPLaced();
Position getStart();
Position getEnd();

#endif // BATEAU_H

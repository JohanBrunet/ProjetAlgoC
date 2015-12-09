#ifndef POSITION_H
#define POSITION_H
#include "Boat.h"

typedef struct Position Position;

Position createPos(int x, int y);
int getX();
int getY();
Position hit();
bool isHit();
Boat getBoat();

#endif // POSITION_H

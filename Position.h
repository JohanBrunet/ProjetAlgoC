#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED
#include "Boat.h"

typedef struct Position Position;

Position createPos(int x, int y);
int getX();
int getY();
Position hit();
bool isHit();
Boat getBoat();

#endif // POSITION_H_INCLUDED

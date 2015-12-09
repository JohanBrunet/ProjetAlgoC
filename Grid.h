#ifndef GRID_H_INCLUDED
#define GRID_H_INCLUDED
#include "Position.h"
#include "Boat.h"
#include "BoatList.h"

typedef struct Grid Grid;

Grid createGrid(int width, int height);
Position getPos(int x, int y);
Boat getBoatFromPos(Position position);
bool isPosValid(Position position);
bool isBoatInSight(Position position);

#endif // GRID_H_INCLUDED

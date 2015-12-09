#ifndef BATEAU_H_INCLUDED
#define BATEAU_H_INCLUDED
#include "position.h"
typedef struct Boat Boat;
struct Boat
{
    int startPos;
    int endPos;
    Position[] posList;
};

Boat createBoat(Position startPos, Position endPos);
int getSize();
bool isDead();
bool isPLaced();
Position getStart();
Position getEnd();
Position[] getPosList();

#endif // BATEAU_H_INCLUDED

#ifndef PLAYER_H
#define PLAYER_H
#include "BoatList.h"

typedef Player Player;

Player createPlayer(BoatList boats, int gridLines, int gridColums);
BoatList getPlacedBoats();
bool isPlaerDead();
Player placeBoats();

#endif // PLAYER_H

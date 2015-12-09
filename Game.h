#ifndef GAME_H
#define GAME_H
#include "Position.h"
#include "Boat.h"
#include "BoatList.h"
#include "Grid.h"

typedef Game Game;

Game CeateGame(int gridWidth, int gridHeight);
Player getPlayer(numPlayer);
bool isPlayerActive(numPlayer);
int shoot(Position posiion);
void play();
void setNextPlayerAcive();



#endif // GAME_H

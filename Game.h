#ifndef GAME_H
#define GAME_H
#include "Position.h"
#include "Boat.h"
#include "BoatList.h"
#include "Grid.h"

typedef Game Game;

Game CeateGame(int gridWidth, int gridHeight); // Cée une nouvelle partie avec les dimensions de la grille que l'on veut
Player getPlayer(int numPlayer); // Renvoie le joueur a partir de son indice dans la liste de joueurs
bool isPlayerActive(int numPlayer); // Renvoie true si c'est le tour du joueur d'indice passé en paramètre, false autrement
int shoot(Position posiion); // Effectue un tir sur la grille du joueur non actif, renvoie 0 si le tir tombe a l'eau, 1 si on est en vue d'un bateau, et 2 si on touche
void setNextPlayerAcive(); // Défint l'autre joueur comme étant actif



#endif // GAME_H

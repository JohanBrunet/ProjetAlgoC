#ifndef GRID_H
#define GRID_H
#include "Position.h"
#include "Boat.h"
#include "BoatList.h"

typedef struct Grid Grid;

Grid createGrid(int width, int height); // Crée une grille a partir de ses dimensions, crée deux liste de bateaux non placés, et deux joueurs en leur donnant une liste de bateaux non placés
Position[] createAllPos(); //Crée toutes les positions de la grille
Position getPos(int x, int y); // Crenvoie une position à partir de ses coordonnées dans la grille
Boat getBoatFromPos(Position position); // Renvoie le bateau éventuellement présent sur la position passée en paramètre
bool isPosValid(Position position); //Renvoie True si la position est présente dans la grille et qu'aucun bateau n'est présent sur cette case, false autrement
bool isBoatInSight(Position position); // Renvoie true si un bateau est présent sur une des positions sur la même ligne ou la même colonne que la position passée en paramètre


#endif // GRID_H

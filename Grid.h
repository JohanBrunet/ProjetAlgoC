#ifndef GRID_H
#define GRID_H
#include "Position.h"
#include "Boat.h"
#include "BoatList.h"

typedef struct Grid Grid;

Grid createGrid(int width, int height); // Cr�e une grille a partir de ses dimensions, cr�e deux liste de bateaux non plac�s, et deux joueurs en leur donnant une liste de bateaux non plac�s
Position[] createAllPos(); //Cr�e toutes les positions de la grille
Position getPos(int x, int y); // Crenvoie une position � partir de ses coordonn�es dans la grille
Boat getBoatFromPos(Position position); // Renvoie le bateau �ventuellement pr�sent sur la position pass�e en param�tre
bool isPosValid(Position position); //Renvoie True si la position est pr�sente dans la grille et qu'aucun bateau n'est pr�sent sur cette case, false autrement
bool isBoatInSight(Position position); // Renvoie true si un bateau est pr�sent sur une des positions sur la m�me ligne ou la m�me colonne que la position pass�e en param�tre


#endif // GRID_H

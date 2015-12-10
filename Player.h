#ifndef PLAYER_H
#define PLAYER_H
#include "BoatList.h"

typedef Player Player;

Player createPlayer(BoatList boats, int gridLines, int gridColums); // Cr�e un joueur avec une liste de bateaux non plac�s, il les placera par la suite. La grille du joueur est cr�e ici a partir de ses dimensions
BoatList getPlacedBoats(); // Renvoie une liste de tous les bateaux plac�s du joueur
bool isPlaerDead(); // V�rifie si le joueur a au moins un bateau restant
Player placeBoats(); // Proc�dure de placements des bateaux non plac�s du joueur

#endif // PLAYER_H

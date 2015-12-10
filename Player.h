#ifndef PLAYER_H
#define PLAYER_H
#include "BoatList.h"

typedef Player Player;

Player createPlayer(BoatList boats, int gridLines, int gridColums); // Crée un joueur avec une liste de bateaux non placés, il les placera par la suite. La grille du joueur est crée ici a partir de ses dimensions
BoatList getPlacedBoats(); // Renvoie une liste de tous les bateaux placés du joueur
bool isPlaerDead(); // Vérifie si le joueur a au moins un bateau restant
Player placeBoats(); // Procédure de placements des bateaux non placés du joueur

#endif // PLAYER_H

#ifndef PLAYER_H
#define PLAYER_H
#include "BoatList.h"

typedef Player Player;

Player createPlayer(BoatList boats, int gridLines, int gridColums); // Cr�e un joueur avec une liste de bateaux non plac�s, il les placera par la suite. La grille du joueur est cr�e ici a partir de ses dimensions
BoatList getPlacedBoats(); // Renvoie une liste de tous les bateaux plac�s du joueur
bool isPlayerDead(); // V�rifie si le joueur a au moins un bateau restant

Player placeBoat(); // Proc�dure de placement d'un bateau du joueur en fonction de la place du bateau dans la liste de bateaux. 
//Prend en paramètre le bateau à placer, la position de départ et la position de fin du bateau. 
//Renvoie 1 si les position et l'indice étaient conforme et que le bateau ne se superposait pas, renvoie 0 dans le cas contraire.

Grid getGrid(); // Renvoie la grille du joueur

#endif // PLAYER_H

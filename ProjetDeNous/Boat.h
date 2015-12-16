#ifndef BATEAU_H
#define BATEAU_H
#include "Position.h"
#include "Boat.h"

typedef struct Boat Boat;       /* Type Bateau */

Boat createBoat(int length); //Crée un bateau en définissant sa taille. Un bateau est non placé lorsqu'il est crée, on ne passe donc pas ses coordonnées de début et de fin en paramètre
Boat placeBoat(Position startPosition, Position endPosition); //Place le bateau en lui donnant une position de début et une position de fin. Aucune vérification des coordonnées n'est éffectuée dans ceette fonction
int getSize();  //Retourne la taille du bateau
bool isDead(); //Retourne Vrai si toutes les cases du bateau sont touchées, renvoie Faux autrement
bool isPLaced();  //Vérifie si le bateau a une position de départ et une position de fin et renvoie Vrai ou Faux
Position getStart(); //Renvoie la position de départ du bateau
Position getEnd(); // Renvoie la position de fin du bateau

#endif // BATEAU_H

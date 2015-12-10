#ifndef BATEAU_H
#define BATEAU_H
#include "Position.h"
#include "Boat.h"

typedef struct Boat Boat;       /* Type Bateau */

Boat createBoat(int length); //Cr�e un bateau en d�finissant sa taille. Un bateau est non plac� lorsqu'il est cr�e, on ne passe donc pas ses coordonn�es de d�but et de fin en param�tre
Boat placeBoat(Position startPosition, Position endPosition); //Place le bateau en lui donnant une position de d�but et une position de fin. Aucune v�rification des coordonn�es n'est �ffectu�e dans ceette fonction
int getSize();  //Retourne la taille du bateau
bool isDead(); //Retourne Vrai si toutes les cases du bateau sont touch�es, renvoie Faux autrement
bool isPLaced();  //V�rifie si le bateau a une position de d�part et une position de fin et renvoie Vrai ou Faux
Position getStart(); //Renvoie la position de d�part du bateau
Position getEnd(); // Renvoie la position de fin du bateau

#endif // BATEAU_H

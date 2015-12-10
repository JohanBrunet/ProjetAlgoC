#ifndef POSITION_H
#define POSITION_H
#include "Boat.h"

typedef struct Position Position;

Position createPos(int x, int y); // Cr�e une position a partir de ses deux coordonn�es
int getX(); // Renvoie l'abscisse sur la grille de la position
int getY(); // Renvoie l'ordonn�e sur la grille de la position
Position hit(); // Frappe la position si il y a un baeau dessus
bool isHit(); // Renvoie Vrai si la position est frapp�e, renvoie Faux sinon
Boat getBoat(); // Renvoie le bateau �ventuellement pr�sent sur la case, renvoie void si aucun bateau n'est pr�sent

#endif // POSITION_H

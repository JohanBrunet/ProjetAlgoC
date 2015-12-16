#ifndef POSITION_H
#define POSITION_H
#include "Boat.h"

typedef struct Position Position;

Position createPos(int x, int y); // Crée une position a partir de ses deux coordonnées
int getX(); // Renvoie l'abscisse sur la grille de la position
int getY(); // Renvoie l'ordonnée sur la grille de la position
Position hit(); // Frappe la position si il y a un baeau dessus
bool isHit(); // Renvoie Vrai si la position est frappée, renvoie Faux sinon
Boat getBoat(); // Renvoie le bateau éventuellement présent sur la case, renvoie void si aucun bateau n'est présent

#endif // POSITION_H

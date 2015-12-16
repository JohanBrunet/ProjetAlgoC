#ifndef GAME_H
#define GAME_H
#include "Position.h"
#include "Boat.h"
#include "BoatList.h"
#include "Grid.h"

typedef Game Game;

Game createGame(int gridWidth, int gridHeight); // C�e une nouvelle partie avec les dimensions de la grille que l'on veut
Player[] createPlayersList(); // Cr�e la liste de joueurs, ajoute deux joueurs et cr�e la liste de bateaux de ces joueurs
Player getNumPlayer(Player player); // Renvoie le joueur a partir de son indice dans la liste de joueurs
bool isPlayerActive(int numPlayer); // Renvoie true si c'est le tour du joueur d'indice pass� en param�tre, false autrement
int shoot(Position posiion); // Effectue un tir sur la grille du joueur non actif, renvoie 0 si le tir tombe a l'eau, 1 si on est en vue d'un bateau, et 2 si on touche, renvoie -1 en cas de coordonn�es invalides
void setNextPlayerAcive(); // D�fint l'autre joueur comme �tant actif, si aucun n'est actif d�fini le premier joueur comme actif
Player getActivePlayer(); // Renvoie le joueur actif



#endif // GAME_H

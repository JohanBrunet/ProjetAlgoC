#include <stdlib.h> 
#include <stdio.h> 
#ifndef JOUEUR_H
#define JOUEUR_H
#include "Bateaux.h"

typedef struct TJoueur TJoueur; /*structure du joueur qui contiendra un numéro et ses bateaux*/
typedef TJoueur* Joueur;

Joueur Creer_joueur();
/*créer un joueur vide (sans bateau) avec seulement son numéro*/
Bateaux Bateaux_non_coule(Joueur j);
/*renvoie l'ensemble des bateaux restantes du joueur*/

 
#endif
#include <stdlib.h>
#include <stdio.h>
#ifndef JOUEUR_H
#define JOUEUR_H
#include "Bateaux.h"

/* Structure du joueur qui contiendra un numéro et ses bateaux  */
typedef struct TJoueur TJoueur;
typedef TJoueur* Joueur;

/* Créer un joueur vide (sans bateau) avec seulement son numéro  */
Joueur Creer_joueur();

/* Renvoie l'ensemble des bateaux restantes du joueur  */
Bateaux Bateaux_non_coule(Joueur j);

#endif

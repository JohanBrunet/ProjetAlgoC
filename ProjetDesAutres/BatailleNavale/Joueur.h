#include <stdlib.h>
#include <stdio.h>
#ifndef JOUEUR_H
#define JOUEUR_H
#include "Bateaux.h"

/* Structure du joueur qui contiendra un numéro et ses bateaux  */
typedef struct TJoueur TJoueur {
    Bateaux listeBateaux;
    int numeroJoueur;
}
typedef TJoueur* Joueur;

/* Créer un joueur vide (sans bateau) avec seulement son numéro  */
Joueur creerJoueur();

/* Renvoie l'ensemble des bateaux restantes du joueur  */
Bateaux bateauxNonCoules(Joueur j);

#endif

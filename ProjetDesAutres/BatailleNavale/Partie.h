#include <stdlib.h>
#include <stdio.h>
#ifndef PARTIE_H
#define PARTIE_H
#include "Grille.h"
#include "Bateau.h"
#include "Joueur.h"

/* Structure qui permet le déroulement du jeu  */
struct TPartie {
	Joueur joueur1;
	Joueur joueur2;
};
typedef struct TPartie* Partie;

/* Créer une partie vide  */
Partie creerPartie();

/* Renvoie le numéro d'un des deux joueurs au hasard  */
int choisirPremierJoueur(Partie partie);

/* Renvoie le joueur à l'aide de son numéro  */
Joueur recupererJoueur(Partie partie, int i);

/* Rend le joueur actif */
Joueur activerJoueurSuivant(Partie partie, Joueur j);

/* Renvoie vrai (en c 1 =vrai, 0=faux) si l'un des deux joueurs n'a plus de bateaux */
int estFini(Joueur j1,Joueur j2);

/* Renvoie le joueur à qui il reste des bateaux, si l'autre n'en a plus */
Joueur aGagne(Joueur j1,Joueur j2);

#endif

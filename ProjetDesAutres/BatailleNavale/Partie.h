#include <stdlib.h>
#include <stdio.h>
#ifndef PARTIE_H
#define PARTIE_H
#include "Grille.h"
#include "Bateau.h"
#include "Joueur.h"

/* Structure qui permet le déroulement du jeu  */
typedef struct TPartie TPartie;

typedef TPartie* Partie;

/* Créer une partie vide  */
Partie Creer_partie();

/* Renvoie le numéro d'un des deux joueurs au hasard  */
int choisir_premier_joueur(Joueur j1,Joueur j2);

/* Renvoie le joueur à l'aide de son numéro  */
Joueur recuperer_joueur(int i);

/* Joueur donne les coordonnées du bateau (ses coordonnées doivent être valides) à mettre sur le grille,
attention les bateaux ne doivent pas se chevaucher et chaque joueur en possède 5,
de tailles différentes et imposées, 1 bateau de taille 1,1 de taille 2, 2 de taille 3 et 1 de taille 4 */
Grille placer_bateau(Bateau b, Grille g);

/* Rend le joueur actif(celui qui est en train de tirer) */
Joueur activer_joueur(Joueur j);

/* Recupère la coordonnée de la colonne sur laquelle le joueur veut tirer, cette position doit être valide */
int tire_colonne();

/* Récupère la coordonnée de la ligne sur laquelle le joueur veut tirer, cette position doit être valide */
int tire_ligne();

/* Enleve la coordonnée touchée du Bateau et de la grille et renvoie ce bateau */
Bateau bateau_touche(Bateau b,int x,int y);

/* Renvoie vrai (en c 1 =vrai, 0=faux) si l'un des deux joueurs n'a plus de bateaux */
int est_fini(Joueur j1,Joueur j2);

/* Renvoie le joueur à qui il reste des bateaux, si l'autre n'en a plus */
Joueur a_gagne(Joueur j1,Joueur j2);

#endif

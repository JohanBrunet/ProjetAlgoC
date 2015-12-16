#include <stdlib.h> 
#include <stdio.h> 
#ifndef BATEAU_H
#define BATEAU_H
#include "resultat.h"

typedef struct TBateau TBateau;/*structure qui contient les positions d'un bateau (ses coordonnées)*/

typedef TBateau* Bateau;

Bateau Creer_bateau();
/*créer un bateau vide (sans coordonnées) qui n'est pas encore placé*/
int bateau_vide(Bateau b);
/*renvoie vrai (1=vrai,0=faux) si le bateau est vide (plus aucune coordonnées)*/
int taille_bateau(Bateau b);
/*renvoie la taille d'un bateau (nombre de coordonnées d'un bateau)*/
Resultat coup_au_but(Bateau b,int x,int y);
/*renvoie un résultat en fonction du tir et de la grille, ce résultat est soit "touché","coulé","enVue","loupé"*/

#endif

 

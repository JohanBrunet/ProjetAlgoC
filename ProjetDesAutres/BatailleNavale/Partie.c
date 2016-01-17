#include <stdlib.h>
#include <stdio.h>
#include "Grille.h"
#include "Bateau.h"
#include "Joueur.h"

/* Créer une partie vide  */
Partie creerPartie() {
    Partie p;
    /* Création des deux joueurs */
    p->joueur1 = creerJoueur(1);
    p->joueur2 = creerJoueur(2);
    return p;
}

/* Renvoie le numéro d'un des deux joueurs au hasard  */
Joueur choisirPremierJoueur(Partie partie) {
    float i = rand();
    if (i <= 0.5) {
        return partie->joueur1;
    }
    else {
        return partie->joueur2;
    }
}

/* Renvoie le joueur à l'aide de son numéro  */
Joueur recupererJoueur(Partie partie, int i) {
	if (i == 1) {
		return partie->joueur1;
	}
	else if (i == 2) {
		return partie->joueur2;
	}
	else {
		printf("%s\n", "Joueur inexistant !");
	}
}

/* Rend le joueur actif */
Joueur activerJoueurSuivant(Partie partie, Joueur joueur) {
	if (getNumJoueur(joueur) == 1) {
		recupererJoueur(partie, 2);
	}
	else {
		recupererJoueur(partie, 1);
	}
}

/* Enleve la coordonnée touchée du Bateau et de la grille et renvoie ce bateau */
Bateau bateauTouche(Bateau b,int x,int y);

/* Renvoie vrai (en c 1 =vrai, 0=faux) si l'un des deux joueurs n'a plus de bateaux */
int estFini(Joueur j1,Joueur j2);

/* Renvoie le joueur à qui il reste des bateaux, si l'autre n'en a plus */
Joueur aGagne(Joueur j1, Joueur j2);
//TODO voir si il n'est pas plus logique de passer la partie en paramètre plutôt que les deux joueurs

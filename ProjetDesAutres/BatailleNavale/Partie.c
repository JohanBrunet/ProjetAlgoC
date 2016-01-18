#include <stdlib.h>
#include <stdio.h>
#include "Grille.h"
#include "Bateau.h"
#include "Joueur.h"
#include "Partie.h"

/* Cr�er une partie vide  */
Partie creerPartie() {
    Partie p;
    /* Cr�ation des deux joueurs */
    p->joueur1 = creerJoueur(1);
    p->joueur2 = creerJoueur(2);
    return p;
}

/* Renvoie le num�ro d'un des deux joueurs au hasard  */
int choisirPremierJoueur(Partie partie) {
    float i = rand();
    if (i <= 0.5) {
        return 1;
    }
    else {
        return 2;
    }
}

/* Renvoie le joueur � l'aide de son num�ro  */
Joueur recupererJoueur(Partie partie, int i) {
	Joueur joueur;
	if (i == 1) {
		joueur = partie->joueur1;
	}
	else if (i == 2) {
		joueur = partie->joueur2;
	}
	else {
		printf("%s\n", "Joueur inexistant !");
	}
	return joueur;
}

/* Rend le joueur actif */
Joueur activerJoueurSuivant(Partie partie, Joueur joueur) {
    Joueur j;
	if (getNumJoueur(joueur) == 1) {
		j = recupererJoueur(partie, 2);
	}
	else {
		j = recupererJoueur(partie, 1);
	}
	return j;
}

/* Renvoie vrai (en c 1 =vrai, 0=faux) si l'un des deux joueurs n'a plus de bateaux */
int estFini(Joueur j1,Joueur j2) {
    if(!estEnVie(j1) || !estEnVie(j2)) {
        return 1;
    }
    else {
        return 0;
    }
}

/* Renvoie le joueur � qui il reste des bateaux, si l'autre n'en a plus */
Joueur aGagne(Joueur j1, Joueur j2) {
    Joueur gagnant;
    if(estEnVie(j1) && !estEnVie(j2)) {
        gagnant = j1;
    }
    else if(estEnVie(j2) && !estEnVie(j1)) {
        gagnant = j2;
    }
    return gagnant;
}

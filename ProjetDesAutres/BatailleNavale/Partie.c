#include <stdlib.h>
#include <stdio.h>
#include "Grille.h"
#include "Bateau.h"
#include "Joueur.h"
#include "Partie.h"

/* Créer une partie vide  */
Partie creerPartie() {
    // affichage de debug
    printf("Creation de la partie !\n");
    Partie p = (Partie) malloc(sizeof(Partie));
    /* Création des deux joueurs */
    p->joueur1 = creerJoueur(1);
    p->joueur2 = creerJoueur(2);
    // affichage de debug
    printf("Partie cree !\n");
    return p;
}

/* Renvoie un joueur au hasard  */
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

/* Renvoie le joueur à qui il reste des bateaux, si l'autre n'en a plus */
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

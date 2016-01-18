#include <stdlib.h>
#include <stdio.h>
#include "Bateau.h"
#include "Bateaux.h"
#include "Grille.h"
#include "Joueur.h"
#include "Partie.h"
#include "Resultat.h"

/* ******************************************* */
/*    Progamme de jeu de la bataille navale    */
/*              Johan BRUNET                   */
/*            Quentin BOUYGUES                 */
/* ******************************************* */

int LARGEUR_GRILLE = 20;
int HAUTEUR_GRILLE = 20;

int main (void) {
    printf("Lancement du programme de la bataille navale \n");
    printf("Let's go !\n");
    printf("\n");

    /* Création de la partie */
    Partie partie = creerPartie();

    printf("debug 1");
    /* Création d'une grille par joueur */
    /* Grille du joueur 1 */
    Grille g1;
    /* Grille du joueur 2 */
    Grille g2;
    g1 = creerGrille(LARGEUR_GRILLE, HAUTEUR_GRILLE);
    g2 = creerGrille(LARGEUR_GRILLE, HAUTEUR_GRILLE);

    setGrilleJoueur(recupererJoueur(partie,1), g1);
    setGrilleJoueur(recupererJoueur(partie,2), g2);

    /* choix du premier joueur à placer ses bateaux */
    Joueur j;
    j = choisirPremierJoueur(partie);
    /* le premier joueur place ses bateaux */
    printf("Le joueur numéro %d va commencer à placer ses bateaux", getNumJoueur(j));

    // TODO placer les bateaux

    /* l'autre joueur va maintenant placer ses bateaux */
    printf("le joueur numéro %d va commencer à placer ses bateaux", getNumJoueur(j));

    // TODO placer les bateaux

    /* on démarre le jeu */
    j = activerJoueurSuivant(partie,j);
    /* boucle du jeu, le jeu s'arrete quand la partie est finie */
    while (!(estFini(partie->joueur1,partie->joueur2))) {
        printf("Joueur %d à vous de tirer :\n", getNumJoueur(j));
        int x,y;
        printf("Veuillez entrer la ligne du tir : ");
        x = scanf("%d", &x);
        printf("Veuillez entrer la colonne du tir : ");
        y = scanf("%d", &y);
        // Ajouter le tir
        Resultat res;
        /* Si la position n'est pas valide o ne fait rien */
        if (!positionValide(j->grille, x, y)) {
            /* si le joueur 1 tire */
            if (getNumJoueur(j) == 1){
                /* s'il y a un bateau à la position */
                if (positionOccupee(j->grille, x, y)) {
                    //TODO si la position est occupée on fait les
                    // verifs sur le bateau (touché, coulé, ...)
                }
                /* si le tir ne touche rien */
                else {
                    if(estEnVue(x,y, j->grille)) {
                        res = creerEnVue();
                        return res;
                    }
                    else {
                        res = creerLoupe();
                        return res;
                    }
                }
            }
            /* si le joueur 2 tire */
            else {
                if (positionOccupee(g1,x,y)) {
                    Bateau b;
                    b = bateauSousTir(g1,x,y);
                    g1 = supprimerPosition(g1,x,y);
                    if (bateauVide(b)) {
                        Resultat coule;
                        coule = creerCoule();
                        int indice;
                        if (b->taille == 1) {
                            indice = 0;
                        }
                        else if (b->taille == 2) {
                            indice = 1;
                        }
                        //TODO voir comment recoonaitre les deux bateaux de taille 3
                        else if (b->taille == 3) {
                            indice = 2;
                        }
                        else if (b->taille == 2) {
                            indice = 4;
                        }
                        b = supprimerBateau(j->grille->bateaux, indice);
                    }
                }
                else {
                    if(estEnVue(x,y, j->grille)) {
                        res = creerEnVue();
                        return res;
                    }
                    else {
                        res = creerLoupe();
                        return res;
                    }
                }
            }
            /* On change de joueur */
            j = activerJoueurSuivant(partie, j);
        }
    }
    /* Fin de la partie et affiche le résultat */
    printf("Partie terminée !");
    Joueur gagnant = aGagne(partie->joueur1, partie->joueur2);
    printf("Bravo joueur %d, vous avez gagné !", getNumJoueur(gagnant));
    return 1;
}


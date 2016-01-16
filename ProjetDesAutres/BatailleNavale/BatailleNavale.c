#include <stdlib.h>
#include <stdio.h>
#include "Partie.h"
#include "Joueur.h"
#include "Bateaux.h"
#include "Bateau.h"
#include "Grille.h"
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
    Partie partie;
    partie = creerPartie();

    /* Création d'une grille par joueur */
    /* Grille du joueur 1 */
    Grille g1;
    /* Grille du joueur 2 */
    Grille g2;
    g1 = creerGrille(LARGEUR_GRILLE, HAUTEUR_GRILLE);
    g2 = creerGrille(LARGEUR_GRILLE, HAUTEUR_GRILLE);

    setGrilleJoueur(recupererJoueur(p,1), g1);
    setGrilleJoueur(recupererJoueur(p,2), g2);

    /* choix du premier joueur à placer ses bateaux */
    Joueur j;
    j = choisirPremierJoueur(p);
    /* le premier joueur place ses bateaux */
    printf("Le joueur numéro %d va commencer à placer ses bateaux", getNumJoueur(j));

    /* l'autre joueur va maintenant placer ses bateaux */
    printf("le joueur numéro %d va commencer à placer ses bateaux", getNumJoueur(j));

    /* on démarre le jeu */    
    j = activerJoueurSuivant(p, j);
    /* boucle du jeu, le jeu s'arrete quand la partie est finie */
    while (!(estFini(j1,j2))) {
        printf("Joueur %d à vous de tirer :\n",n);
        int x,y;
        printf("Veuillez entrer la ligne du tir : ");
        x = scanf("%d", x);
        printf("Veuillez entrer la colonne du tir : ");
        y = scanf("%d", y);
        // Ajouter le tir
        Resultat res;
        /* Si la position n'est pas valide o ne fait rien */
        if (!positionValide(j->grille, x, y)) {
            /* si le joueur 1 tire */
            if (getNumJoueur(j) == 1){
                /* s'il y a un bateau à la position */
                if (positionOccupee(j->grille,x,y)) {
                    //TODO si la position est occupée on fait les
                    // verifs sur le bateau (touché, coulé, ...)
                }
                /* si le tir ne touche rien */
                else {
                    if(estEnVue(x,y)) {
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
                    b = bateauTouche(b,x,y);
                    res = coupAuBut(b,x,y);
                    return res;
                    if (bateauVide(b)) {
                        Resultat coule;
                        coule = creerCoule();
                        bx1 = supprimeBateau(b,bx1);
                    }
                }
                else {
                    if(estEnVue(x,y)) {
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
            j = activerJoueurSuivant(p, j)
        }
    }
    /* Fin de la partie et affiche le résultat */
    printf("Partie terminée !");
    Joueur gagnant = aGagne(p->j1, p->j2);
    printf("Bravo joueur %d, vous avez gagné !", getNumJoueur(gagnant));
    return EXIT_SUCCES;
}
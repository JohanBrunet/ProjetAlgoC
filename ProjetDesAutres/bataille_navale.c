#include <stdlib.h>
#include <stdio.h>
#include "Partie.h"
#include "Joueur.h"
#include "Bateaux.h"
#include "Bateau.h"
#include "Grille.h"
#include "Resultat.h"

/* ******************************************* */
/*  Progamme de jeu de la bataille navale    */
/*  Laure MARCHAL
   Ana-Maria OPRESCU  */
/* ******************************************* */

int main (void)
    {
    printf("Lancement du programme de la bataille navale \n");
    printf("Let's go !\n");
    printf("\n");

    /* Création de la partie */
    Partie p;
    p  =  Creer_partie();

    /* Création d'une grille par joueur */
    /* Grille du joueur 1 */
    Grille g1;
    /* Grille du joueur 2 */
    Grille g2;
    g1 = Creer_grille();
    g2 = Creer_grille();

    /* Création des deux joueurs */
    Joueur j1;
    Joueur j2;
    j1 = Creer_joueur();
    j2 = Creer_joueur();

    /* Création des ensembles de Bateaux */
    Bateaux bx1;
    Bateaux bx2;
    bx1 = Creer_bateaux();
    bx2 = Creer_bateaux();

    /* Création des bateaux */
    /* Bateaux du joueur 1 */
    Bateau bat11;
    bat11 = Creer_bateau();
    Bateau bat12;
    bat12 = Creer_bateau();
    Bateau bat13;
    bat13 = Creer_bateau();
    Bateau bat14;
    bat14 = Creer_bateau();
    Bateau bat15;
    bat15 = Creer_bateau();
    /* Bateaux du joueur 2 */
    Bateau bat21;
    bat21 = Creer_bateau();
    Bateau bat22;
    bat22 = Creer_bateau();
    Bateau bat23;
    bat23 = Creer_bateau();
    Bateau bat24;
    bat24 = Creer_bateau();
    Bateau bat25;
    bat25 = Creer_bateau();

    /* choix du premier joueur à placer ses bateaux */
    int j;
    j = choisir_premier_joueur(j1,j2);
    printf("le joueur numéro %d va commencer à placer ses bateaux",j);

    /* le premier joueur place ses bateaux */
        /* on met ses bateaux dans l'ensemble des bateaux */
        if (j =  = 1){
            g1 = placer_bateau(bat11,g1);
            bx1 = ajouter_bateau(bat11);
            g1 = placer_bateau(bat12,g1);
             bx1 = ajouter_bateau(bat12);
            g1 = placer_bateau(bat13,g1);
             bx1 = ajouter_bateau(bat13);
            g1 = placer_bateau(bat14,g1);
             bx1 = ajouter_bateau(bat14);
            g1 = placer_bateau(bat15,g1);
             bx1 = ajouter_bateau(bat15);

            /* l'autre joueur va placer ses bateaux lui aussi */
            printf("le joueur numéro %d va commencer à placer ses bateaux",2);

            g2 = placer_bateau(bat21,g2);
            bx2 = ajouter_bateau(bat21);
            g2 = placer_bateau(bat22,g2);
            bx2 = ajouter_bateau(bat22);
            g2 = placer_bateau(bat23,g2);
            bx2 = ajouter_bateau(bat23);
            g2 = placer_bateau(bat24,g2);
            bx2 = ajouter_bateau(bat24);
            g2 = placer_bateau(bat25,g2);
            bx2 = ajouter_bateau(bat25);
        }
        else{
            g2 = placer_bateau(bat21,g2);
             bx2 = ajouter_bateau(bat21);
            g2 = placer_bateau(bat22,g2);
            bx2 = ajouter_bateau(bat22);
            g2 = placer_bateau(bat23,g2);
            bx2 = ajouter_bateau(bat23);
            g2 = placer_bateau(bat24,g2);
            bx2 = ajouter_bateau(bat24);
            g2 = placer_bateau(bat25,g2);
            bx2 = ajouter_bateau(bat25);

            /* l'autre joueur va placer ses bateaux lui aussi */
            printf("le joueur numéro %d va commencer à placer ses bateaux",1);

            g1 = placer_bateau(bat11,g1);
            bx1 = ajouter_bateau(bat11);
            g1 = placer_bateau(bat12,g1);
            bx1 = ajouter_bateau(bat12);
            g1 = placer_bateau(bat13,g1);
            bx1 = ajouter_bateau(bat13);
            g1 = placer_bateau(bat14,g1);
            bx1 = ajouter_bateau(bat14);
            g1 = placer_bateau(bat15,g1);
            bx1 = ajouter_bateau(bat15);
        }
    /* on démarre le jeu */
        /* on choisit le premier joueur à tirer au hasard */
    int n;
    n = choisir_premier_joueur(j1,j2);
    Joueur joueur;
    joueur = recuperer_joueur(n);
    joueur = activer_joueur(joueur);
        /* boucle du jeu, le jeu s'arrete quand la partie est finie */
        while(!(est_fini(j1,j2))){
            printf("joueur %d à vous de tirer :\n",n);
            int x,y;
            /* coordonnées du tir */
            x = tire_colonne();
            y = tire_ligne();
             Resultat res;
            /* si le joueur 1 tire */
            if (n =  = 1){
                /* s'il y a un bateau à la position */
                if (positionOccupee(g2,x,y)){
                    Bateau b;
                    b = BateauSousTir(g2,x,y);
                    b = bateau_touche(b,x,y);
                    res = coupAuBut(b,x,y);
                    return res; /* affiche le résultat */
                    /* test si le bateau est coulé */
                    if (bateau_vide(b)){
                        Resultat coule;
                        coule = creer_coule();
                        bx2 = supprime_bateau(b,bx2);
                    }
                }
                /* si le tir ne touche rien */
                else{
                    if(est_enVue(x,y)){
                        res = creer_enVue();
                        return res;
                    }
                    else{
                        res = creer_loupe();
                        return res;
                    }
                }
                /* on change de joueur */
                j2 = activer_joueur(j2);
                n = 2;
            }
            /* si le joueur 2 tire */
            else{
                    if (positionOccupee(g1,x,y)){
                        Bateau b;
                        b = BateauSousTir(g1,x,y);
                        b = bateau_touche(b,x,y);
                        res = coupAuBut(b,x,y);
                        return res;
                        if (bateau_vide(b)){
                            Resultat coule;
                            coule = creer_coule();
                            bx1 = supprime_bateau(b,bx1);
                        }
                    }
                    else{
                        if(est_enVue(x,y)){
                            res = creer_enVue();
                            return res;
                        }
                        else{
                            res = creer_loupe();
                            return res;
                        }
                    }
                }
            /* On change de joueur */
            j1 = activer_joueur(j1);
            n = 1;
            }
    /* Fin de la partie et affiche le résultat */
    printf("la partie est terminée");
    if (a_gagne(j1,j2) =  = j1){
        printf("Bravo joueur %d ! vous avez gagné !",1);
    }
        else {
        printf("Bravo joueur %d ! vous avez gagné !",2);
    }
return 0;
}


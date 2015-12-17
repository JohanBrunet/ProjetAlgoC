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
    p  =  creerPartie();

    /* Création d'une grille par joueur */
    /* Grille du joueur 1 */
    Grille g1;
    /* Grille du joueur 2 */
    Grille g2;
    g1 = creerGrille();
    g2 = creerGrille();

    /* Création des deux joueurs */
    Joueur j1;
    Joueur j2;
    j1 = creerJoueur();
    j2 = creerJoueur();

    /* Création des ensembles de Bateaux */
    Bateaux bx1;
    Bateaux bx2;
    bx1 = creerBateaux();
    bx2 = creerBateaux();

    /* Création des bateaux */
    /* Bateaux du joueur 1 */
    Bateau bat11;
    bat11 = creerBateau();
    Bateau bat12;
    bat12 = creerBateau();
    Bateau bat13;
    bat13 = creerBateau();
    Bateau bat14;
    bat14 = creerBateau();
    Bateau bat15;
    bat15 = creerBateau();
    /* Bateaux du joueur 2 */
    Bateau bat21;
    bat21 = creerBateau();
    Bateau bat22;
    bat22 = creerBateau();
    Bateau bat23;
    bat23 = creerBateau();
    Bateau bat24;
    bat24 = creerBateau();
    Bateau bat25;
    bat25 = creerBateau();

    /* choix du premier joueur à placer ses bateaux */
    int j;
    j = choisirPremierJoueur(j1,j2);
    printf("le joueur numéro %d va commencer à placer ses bateaux",j);

    /* le premier joueur place ses bateaux */
    /* on met ses bateaux dans l'ensemble des bateaux */
        if (j == 1){
            g1 = placerBateau(bat11,g1);
            bx1 = ajouterBateau(bat11);
            g1 = placerBateau(bat12,g1);
             bx1 = ajouterBateau(bat12);
            g1 = placerBateau(bat13,g1);
             bx1 = ajouterBateau(bat13);
            g1 = placerBateau(bat14,g1);
             bx1 = ajouterBateau(bat14);
            g1 = placerBateau(bat15,g1);
             bx1 = ajouterBateau(bat15);

            /* l'autre joueur va placer ses bateaux lui aussi */
            printf("le joueur numéro %d va commencer à placer ses bateaux",2);

            g2 = placerBateau(bat21,g2);
            bx2 = ajouterBateau(bat21);
            g2 = placerBateau(bat22,g2);
            bx2 = ajouterBateau(bat22);
            g2 = placerBateau(bat23,g2);
            bx2 = ajouterBateau(bat23);
            g2 = placerBateau(bat24,g2);
            bx2 = ajouterBateau(bat24);
            g2 = placerBateau(bat25,g2);
            bx2 = ajouterBateau(bat25);
        }
        else{
            g2 = placerBateau(bat21,g2);
             bx2 = ajouterBateau(bat21);
            g2 = placerBateau(bat22,g2);
            bx2 = ajouterBateau(bat22);
            g2 = placerBateau(bat23,g2);
            bx2 = ajouterBateau(bat23);
            g2 = placerBateau(bat24,g2);
            bx2 = ajouterBateau(bat24);
            g2 = placerBateau(bat25,g2);
            bx2 = ajouterBateau(bat25);

            /* l'autre joueur va placer ses bateaux lui aussi */
            printf("le joueur numéro %d va commencer à placer ses bateaux",1);

            g1 = placerBateau(bat11,g1);
            bx1 = ajouterBateau(bat11);
            g1 = placerBateau(bat12,g1);
            bx1 = ajouterBateau(bat12);
            g1 = placerBateau(bat13,g1);
            bx1 = ajouterBateau(bat13);
            g1 = placerBateau(bat14,g1);
            bx1 = ajouterBateau(bat14);
            g1 = placerBateau(bat15,g1);
            bx1 = ajouterBateau(bat15);
        }
    /* on démarre le jeu */
        /* on choisit le premier joueur à tirer au hasard */
    int n;
    n = choisirPremierJoueur(j1,j2);
    Joueur joueur;
    joueur = recupererJoueur(n);
    joueur = activerJoueur(joueur);
        /* boucle du jeu, le jeu s'arrete quand la partie est finie */
        while(!(estFini(j1,j2))){
            printf("joueur %d à vous de tirer :\n",n);
            int x,y;
            // Ajouter le tir
             Resultat res;
            /* si le joueur 1 tire */
            if (n == 1){
                /* s'il y a un bateau à la position */
                if (positionOccupee(g2,x,y)){
                    //WHAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAT juste au dessous
                    Bateau b;
                    b = bateauSousTir(g2,x,y);
                    b = bateauTouche(b,x,y);
                    res = coupAuBut(b,x,y);
                    return res; /* affiche le résultat */
                    /* test si le bateau est coulé */
                    if (bateauVide(b)){
                        Resultat coule;
                        coule = creerCoule();
                        bx2 = supprimeBateau(b,bx2);
                    }
                }
                /* si le tir ne touche rien */
                else{
                    if(estEnVue(x,y)){
                        res = creerEnVue();
                        return res;
                    }
                    else{
                        res = creerLoupe();
                        return res;
                    }
                }
                /* on change de joueur */
                j2 = activerJoueur(j2);
                n = 2;
            }
            /* si le joueur 2 tire */
            else{
                    if (positionOccupee(g1,x,y)){
                        Bateau b;
                        b = bateauSousTir(g1,x,y);
                        b = bateauTouche(b,x,y);
                        res = coupAuBut(b,x,y);
                        return res;
                        if (bateauVide(b)){
                            Resultat coule;
                            coule = creerCoule();
                            bx1 = supprimeBateau(b,bx1);
                        }
                    }
                    else{
                        if(estEnVue(x,y)){
                            res = creerEnVue();
                            return res;
                        }
                        else{
                            res = creerLoupe();
                            return res;
                        }
                    }
                }
            /* On change de joueur */
            j1 = activerJoueur(j1);
            n = 1;
            }
    /* Fin de la partie et affiche le résultat */
    printf("la partie est terminée");
    if (aGagne(j1,j2) == j1){
        printf("Bravo joueur %d ! vous avez gagné !",1);
    }
        else {
        printf("Bravo joueur %d ! vous avez gagné !",2);
    }
return 0;
}


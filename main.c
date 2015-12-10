#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "Boat.h"
#include "BoatList.h"
#include "Game.h"
#include "Grid.h"
#include "Player.h"
#include "Position.h"

int main()
{
    printf("Bienvenue dans la partie\n");   // Signale à l'utilisateur qu'il commence une partie

    Game game = createGame(20,20);  // Création de la partie avec initialisation des joueurs, prend en paramètres la taille e la grille
    game.setNextPlayerAcive();  // Rend le premier joueur actif
    Player joueurActif = game.getActivePlayer();    // Récupère le joueur actif
    printf("Le joueur 1 va placer ses bateaux\n");
    joueurActif.placeBoats();   // Le joueur actif place ses bateaux
    game.setNextPlayerActive();     // On passe au joueur suivant
    printf("Le joueur 2 va placer ses bateaux\n");
    joueurActif = game.getActivePlayer();   // Le deuxième joueur place ses bateaux
    joueurActif.placeBoats();   // Le deuxième joueur place ses bateaux
    game.setNextPlayerActive();     // On passe au joueur suivant
    joueurActif = game.getActivePlayer();   // On récupère le joueur actif

    while (not joueurActif.isPlayerDead()) {
        printf("C'est au joueur %d de tirer !\n", game.getNumPlayer(joueurActif));  // Le joueur actif va effectuer un tir
        printf("Veuillez entrer la coordonnée x du tir");
        int x;
        scanf("%d", &x);    // Récupère la coordonnée x saisie par l'utilisateur
        printf("Veuillez entrer la coordonnée y du tir");
        int y;
        scanf("%d", &y);    // Récupère la coordonnée y saisie par l'utilisateur
        Position position = createPos(x,y);
        game.shoot(position);   // On tire sur la position désignée par le joueur
        // Faire le if sur le résultat du tir
        // Afficher le résultat du tir
        game.setNextPlayerActive();     // On passe au joueur suivant
        joueurActif = game.getActivePlayer();   // On récupère le joueur actif
    }
    game.setNextPlayerActive();     // Le joueur suivant est le vainqueur car le joueur précédent est mort
    joueurActif = game.getActivePlayer();   // On récupère le joueur gagnant
    printf("FIN DE PARTIE, le joueur %d a gagné, bien joué !\n", game.getNumPlayer(joueurActif));   // On affiche qui a gagné la partie

    sleep(5000);
    return 0;
}



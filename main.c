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
    printf("Bienvenue dans la partie\n");   // Signale � l'utilisateur qu'il commence une partie

    Game game = createGame(20,20);  // Cr�ation de la partie avec initialisation des joueurs, prend en param�tres la taille e la grille
    game.setNextPlayerAcive();  // Rend le premier joueur actif
    Player joueurActif = game.getActivePlayer();    // R�cup�re le joueur actif
    printf("Le joueur 1 va placer ses bateaux\n");
    joueurActif.placeBoats();   // Le joueur actif place ses bateaux
    game.setNextPlayerActive();     // On passe au joueur suivant
    printf("Le joueur 2 va placer ses bateaux\n");
    joueurActif = game.getActivePlayer();   // Le deuxi�me joueur place ses bateaux
    joueurActif.placeBoats();   // Le deuxi�me joueur place ses bateaux
    game.setNextPlayerActive();     // On passe au joueur suivant
    joueurActif = game.getActivePlayer();   // On r�cup�re le joueur actif

    while (not joueurActif.isPlayerDead()) {
        printf("C'est au joueur %d de tirer !\n", game.getNumPlayer(joueurActif));  // Le joueur actif va effectuer un tir
        printf("Veuillez entrer la coordonn�e x du tir");
        int x;
        scanf("%d", &x);    // R�cup�re la coordonn�e x saisie par l'utilisateur
        printf("Veuillez entrer la coordonn�e y du tir");
        int y;
        scanf("%d", &y);    // R�cup�re la coordonn�e y saisie par l'utilisateur
        Position position = createPos(x,y);
        game.shoot(position);   // On tire sur la position d�sign�e par le joueur
        // Faire le if sur le r�sultat du tir
        // Afficher le r�sultat du tir
        game.setNextPlayerActive();     // On passe au joueur suivant
        joueurActif = game.getActivePlayer();   // On r�cup�re le joueur actif
    }
    game.setNextPlayerActive();     // Le joueur suivant est le vainqueur car le joueur pr�c�dent est mort
    joueurActif = game.getActivePlayer();   // On r�cup�re le joueur gagnant
    printf("FIN DE PARTIE, le joueur %d a gagn�, bien jou� !\n", game.getNumPlayer(joueurActif));   // On affiche qui a gagn� la partie

    sleep(5000);
    return 0;
}



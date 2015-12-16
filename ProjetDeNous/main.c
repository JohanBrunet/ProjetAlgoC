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
    placeBoats(joueurActif);   // Le joueur actif place ses bateaux
    game.setNextPlayerActive();     // On passe au joueur suivant
    printf("Le joueur 2 va placer ses bateaux\n");
    joueurActif = game.getActivePlayer();   // Le deuxi�me joueur place ses bateaux
    placeBoats(joueurActif);   // Le deuxi�me joueur place ses bateaux
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
        int result = game.shoot(position);   // On tire sur la position d�sign�e par le joueur
        switch(result){
            case 0: printf("A l'eau !");
                break;
            case 1: printf("En vue !");
                break;
            case 2: printf("Touch� !");
                break;
            case -1: printf("Coordonn�es invalides !");
                break;
            default: break;
        }
        game.setNextPlayerActive();     // On passe au joueur suivant
        joueurActif = game.getActivePlayer();   // On r�cup�re le joueur actif
    }
    game.setNextPlayerActive();     // Le joueur suivant est le vainqueur car le joueur pr�c�dent est mort
    joueurActif = game.getActivePlayer();   // On r�cup�re le joueur gagnant
    printf("FIN DE PARTIE, le joueur %d a gagn�, bien jou� !\n", game.getNumPlayer(joueurActif));   // On affiche qui a gagn� la partie

    sleep(5000);
    return 0;
}

// Place les bateaux d'un joueur. Demande les positions, et appelle joueur.placeBoat;
void placeBoats(Player player){
    Position posDebut = new Position(-1,-1);
    Position posFin = new POsition(-1,-1);
    Grid grille = player.getGrid();
    printf("Veuillez placer votre premier bateau (taille 1) : \n");
    int result = 0;
    while (result == 0) {
        printf("Entrez les coordonnées du début du bateau\n");
        posDebut = getInputCoordinates(grille);
        printf("Entrez les coordonnées de la fin du bateau\n");
        posFin = getInputCoordinates(grille);
        
        result = player.placeBoat(Player.getBoat(0), posDebut, posFin);
        if(result == 0) {
            printf("Coordonnées incorrectes");
        }
    } 
    printf("Veuillez placer votre premier bateau (taille 2) : \n");
    result = 0;
    while (result == 0) {
        printf("Entrez les coordonnées du début du bateau\n");
        posDebut = getInputCoordinates(grille);
        printf("Entrez les coordonnées de la fin du bateau\n");
        posFin = getInputCoordinates(grille);
        
        result = player.placeBoat(Player.getBoat(0), posDebut, posFin);
        if(result == 0) {
            printf("Coordonnées incorrectes");
        }
    } 
    printf("Veuillez placer votre premier bateau (taille 3) : \n");
    result = 0;
    while (result == 0) {
        printf("Entrez les coordonnées du début du bateau\n");
        posDebut = getInputCoordinates(grille);
        printf("Entrez les coordonnées de la fin du bateau\n");
        posFin = getInputCoordinates(grille);
        
        result = player.placeBoat(Player.getBoat(0), posDebut, posFin);
        if(result == 0) {
            printf("Coordonnées incorrectes");
        }
    } 
    printf("Veuillez placer votre premier bateau (taille 3) : \n");
    result = 0;
    while (result == 0) {
        printf("Entrez les coordonnées du début du bateau\n");
        posDebut = getInputCoordinates(grille);
        printf("Entrez les coordonnées de la fin du bateau\n");
        posFin = getInputCoordinates(grille);
        
        result = player.placeBoat(Player.getBoat(0), posDebut, posFin);
        if(result == 0) {
            printf("Coordonnées incorrectes");
        }
    } 
    printf("Veuillez placer votre premier bateau (taille 4) : \n");
    result = 0;
    while (result == 0) {
        printf("Entrez les coordonnées du début du bateau\n");
        posDebut = getInputCoordinates(grille);
        printf("Entrez les coordonnées de la fin du bateau\n");
        posFin = getInputCoordinates(grille);
        
        result = player.placeBoat(Player.getBoat(0), posDebut, posFin);
        if(result == 0) {
            printf("Coordonnées incorrectes");
        }
    } 
    printf("Veuillez placer votre premier bateau (taille 5) : \n");
    result = 0;
    while (result == 0) {
        printf("Entrez les coordonnées du début du bateau\n");
        posDebut = getInputCoordinates(grille);
        printf("Entrez les coordonnées de la fin du bateau\n");
        posFin = getInputCoordinates(grille);
        
        result = player.placeBoat(Player.getBoat(0), posDebut, posFin);
        if(result == 0) {
            printf("Coordonnées incorrectes");
        }
    }
}

// Récupère la position associée à deux coordonnées dans la grille spécifiée
Position getInputCoordinates(Grid grille) {
    printf("Entrez l'abscisse\n");
    int x;
    scanf("%d", &x);
    printf("Entrez l'ordonnée\n");
    int y;
    scanf("%d", &x);
    return grille.getPosFromCoord(x, y);
}

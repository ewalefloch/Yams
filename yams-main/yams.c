/*
**@brief Yams
**@author Mathieu LE VEN
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include "fonctions.c" //appel du fichier avec toutes les fonctions

//Definition des constantes
const int NBCOUPS=13;
const int SEUILBONUS=62;
const int MAXCOUPS=3;
    //Definition du nombre de points de chaque competences
    const int BONUS=35;
    const int FULHOUSE=25;
    const int PETITESUITE=30;
    const int GRANDESUITE=40;
    const int YAMS=50;

//Debut du programme principal
int main()
{
    srand( time( NULL ) ); // Initialisation de l'horloge pour avoir des valeurs complètement aléatoire à chaque tours
    //Definition et initiallisation des differentes variables
    char pseudo1[20] = "Pseudo 1"; //Definition du pseudo du joueur 1
    char pseudo2[20] = "Pseudo 2";//Definition du pseudo du joueur 2
    int score1=0; //Initialisation du score du joueur 1
    int score2=0;//Initialisation du score du joueur 2
    int de1;    // Déclaration des dés.
    int de2;    // Déclaration des dés.
    int de3;    // Déclaration des dés.
    int de4;    // Déclaration des dés.
    int de5;    // Déclaration des dés.
    Lancerdes(de1,de2,de3,de4,de5);
    return EXIT_SUCCESS;
}

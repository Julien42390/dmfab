#include <stdio.h>
#include <string.h>
#include "common.h"
#include "ethernet.h"

// Analyser entete Ethernet
void analyserEthernet(char *trame, Ethernet *ethernet) 
{    
    memcpy(&ethernet->destination, trame, 6);
    memcpy(&ethernet->source, &trame[6], 6);
    ethernet->longueur = MAKE_SHORT(trame[12], trame[13]);
}

// Afficher une adresse Ethernet / MAC
void afficherAdresseEthernet(char *adresse)
{


    // Afficher chaque octet de l'adresse en format hexadécimal
    printf("%02X:%02X:%02X:%02X:%02X:%02X",
       adresse[0] & 0xFF,
        adresse[1] & 0xFF,
        adresse[2] & 0xFF,
        adresse[3] & 0xFF,
        adresse[4] & 0xFF,
        adresse[5] & 0xFF);
}


// Afficher entete Ethernet
void afficherEthernet(Ethernet ethernet)
{
    printf("Ethernet:\n");
    printf("    destination: ");
    afficherAdresseEthernet(ethernet.destination);
    printf("\n");
    printf("    source: ");
    afficherAdresseEthernet(ethernet.source);
    printf("\n");
    printf("    longueur: %d\n", ethernet.longueur);
}

#include <stdio.h>
#include "common.h"
#include "ip.h"

// Analyser entete IP
void analyserIP(char *trame, IP *ip)
{
    error_exit("Fonction analyserIP() non implémentée");
}

// Afficher une adresse IP
void afficherIPAddress(unsigned int address)
{

    unsigned char octets[4];

    octets[0]= (address >> 24) & 0xFF;
    octets[1]= (address >> 16) & 0xFF;
    octets[2]= (address >> 8) & 0xFF;
    octets[3]= address & 0xFF;

    printf("%d.%d.%d.%d\n", octets[0],octets[1],octets[2],octets[3]);

}

// Afficher entete IP
void afficherIP(IP ip)
{
    printf("IP:\n");
    printf("    version: %d\n", ip.version);
    printf("    IHL: %d\n", ip.IHL);
    printf("    typeOfService: %d\n", ip.typeOfService);
    printf("    totalLength: %d\n", ip.totalLength);
    printf("    identification: %d\n", ip.identification);
    printf("    flags: %d\n", ip.flags);
    printf("    fragmentOffset: %d\n", ip.fragmentOffset);
    printf("    timeToLive: %d\n", ip.timeToLive);
    printf("    protocol: %d\n", ip.protocol);
    printf("    HeaderChecksum: %d\n", ip.HeaderChecksum);
    printf("    sourceIP: ");
    afficherIPAddress(ip.sourceIP);
    printf("\n    destinationIP: ");
    afficherIPAddress(ip.destinationIP);
    printf("\n");
}

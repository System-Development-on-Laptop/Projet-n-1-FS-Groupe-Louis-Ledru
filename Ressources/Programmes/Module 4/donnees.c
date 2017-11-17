#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "donnees.h"


void openFile(int *ptr)
{
    FILE* file;
    int i = 0;
    char tableau[10];
    int c;
    int now;

    TableauDonnees TableauDonneesValeur[50];

    file = fopen("Battements_lisibleenC.csv", "r");

    if(file != NULL)
    {
        while((c = fgetc(file)) != EOF)
        {
            if(c == ';' || c == '\n')
            {
                TableauDonneesValeur[i].x=strtol(tableau, NULL, 10);
                now = 0;
                ptr[i] = TableauDonneesValeur[i].x;
                printf("%d\n", ptr[i]);
                i++;
            }
            else
            {
                tableau[now++]=c;
            }
        }
    }
}

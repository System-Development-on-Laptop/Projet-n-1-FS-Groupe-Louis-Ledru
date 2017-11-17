#include <stdio.h>
#include "donnees.h"
#include "actions.h"
#define TAILLE 100
void menu()
{
      int choice;
      char tab[TAILLE];
      FILE* battement = NULL;

  printf("\n Choisir une action à exécuter \n");
  printf("\n 1:Afficher toutes les valeurs prises dans le fichier \n");
  printf("\n 2:Afficher les valeurs classees par odre croissant \n");
  printf("\n 3:Afficher les valeurs classees par ordre decroissant \n");
  printf("\n 4:Afficher les valeurs pour un temps particulier \n");
  printf("\n 5:Afficher la moyenne de pouls dans une plage de temps donnee  \n");
  printf("\n 6:Afficher le nombre de lignes de donnees actuellement en memoire  \n");
  printf("\n 7:Rechercher et afficher les maximum et le minimum de pouls (avec le temps associe) \n");
  printf("\n 8:Quitter \n");
  scanf("%d", &choice);

      switch (choice)
      {
        case 1: //Afficher toutes les valeurs prise dans le fichier
          //Appel de fonction
          break;

        case 2: //Afficher les valeurs classées par odre croissant
          //Appel de fonction
          break;

        case 3: //Afficher les valeurs classées par ordre décroissant
          //Appel de fonction
          break;

        case 4: //Afficher les valeurs pour un temps particulier
          //Appel de fonction
          break;

        case 5: //Afficher la moyenne de pouls dans une plage de temps donnée
          //Appel de fonction
          break;

        case 6: //Afficher le nombre de lignes de données actuellement en mémoire
          //Appel de fonction
          break;

        case 7: //Rechercher et afficher les max/min de pouls (avec le temps associé)
          //Appel de fonction
          break;

        case 8: //Quitter
          //Appel de fonction
          break;

        }
}



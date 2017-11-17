#include "Arduino.h"
#include "cardio.h"

int prendValeurActuelle() {
	return analogRead(0); //prend la valeur de la tension sur la branche analogique de l'arduino
}

int calculerPouls(int valeurActuelle, int valeurSeuil, int *valeurPrecedente, long *tempsPrecedent) { //fonctoin renvoyant la fréquence cardiaque
  int pouls;
  if (valeurActuelle > valeurSeuil) { //verifie si on est dans un pouls
    if (*valeurPrecedente <= valeurSeuil) { //verifie si on est dans un même pouls
      long tempsDetection = millis(); //définit à quel moment le pouls a ete detecter
      if (tempsDetection > (*tempsPrecedent + 200)) { //Verifie si il n'y a pas d'interferences
        pouls = (1000.0 * 60.0) / (tempsDetection - *tempsPrecedent); //calcule la fréquence cardiaque à partir de l'écart de temps qu'il y a entre deux pouls
        *tempsPrecedent = tempsDetection; //conserve la valeur de temps en tant que valeur precedente pour la reutiliser dans une nouvelle boucle
      }
    }
  }
  *valeurPrecedente = valeurActuelle; //conserve la valeur de tension en tant que valeur precedente pour la reutiliser dans une nouvelle boucle
  return pouls; //retourne la fréquence cardiaque
} 

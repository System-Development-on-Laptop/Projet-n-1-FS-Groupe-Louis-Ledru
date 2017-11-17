#include "cardio.c"

int valeurSeuil = 1000;
int valeurPrecedente = 0;
long tempsPrecedent = 0;

void setup() {
	Serial.begin(9600); //définit la vitesse de transmissiondes données sur le port série
}

void loop() {
	int valeurActuelle = prendValeurActuelle();//prend la valeur de la tension sur la branche analogique de l'arduino
  
	int pouls = calculerPouls(valeurActuelle, valeurSeuil, &valeurPrecedente, &tempsPrecedent); //calcule la fréquence cardiaque via la fonction
  if (pouls != 0)
	  afficherPouls(pouls); //affiche la fréquence cardiaque via la fonction
}

void afficherPouls(int pouls) { //affiche la fréquence cardiaque
  Serial.println(pouls);
}

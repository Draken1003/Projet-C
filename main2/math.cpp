#include "math.h"

int ajouteDeux(int nombreRecu)
{
	int valeur = nombreRecu + 2;

	return valeur;
}

int carre(int nombreRecu)
{
	int valeur = nombreRecu * nombreRecu;
	return valeur;
}

int nombreDeSeconde(int heure, int minute, int seconde)
{
	int totale = 0;
	totale = heure * 60 * 60;
	totale += minute * 60;
	totale += seconde;

	return totale;
}

double moyenne(double tableau[], int tailleTableau)
{
	double moyennes = 0;

	for (int i = 0; i < tailleTableau; i++)
	{
		moyennes += tableau[i];
	}
	moyennes /= tailleTableau;

	return moyennes;
}
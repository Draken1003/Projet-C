#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <conio.h>

using namespace std;

string motsAleatoire(const vector <string>& mots) //chercheur de mot aleatoire dans une liste 
{
	srand(static_cast<unsigned int>(time(0))); // synchronisation avec le temps reel
	int indexAleatoire = rand() % mots.size(); // choisis un nombre aleatoire de la longueur de la liste
	return mots[indexAleatoire]; // renvoi le mots qui se trouve a la position indexAleatoire
}

string transformateurMots(string& mot, int taille)
{
	for (int i = 0; i < taille; i++)
	{
		mot[i] = '_';
	}
	return mot;
}

int main()
{
	string motsChoisit;
	cin >> motsChoisit;
	string motATrouver = motsChoisit;

	transformateurMots(motATrouver, motsChoisit.size());

	int vie = 10;

	while (vie > 0)
	{
		char lettre;
		cout << "Entrer une lettre : ";
		cin >> lettre;
		cin.ignore();


		bool lettreTrouvee = false; // Pour garder une trace si la lettre est trouvée dans au moins un mot 
		string motTrouve = motATrouver; // Copie motATrouver pour l'itération courante

		for (int j = 0; j < motsChoisit.size(); j++) // Parcours des lettres du mot actuel
		{
			if (lettre == motsChoisit[j])
			{
				motTrouve[j] = lettre;
				lettreTrouvee = true;
			}
		}

		if (lettreTrouvee)
		{
			motATrouver = motTrouve;
			cout << motATrouver << endl; // Affiche motATrouver après l'insertion
		}

		if (!lettreTrouvee)
		{
			vie -= 1;
			cout << "Mauvaise lettre! il vous reste " << vie << "/10." << endl;
		}
		if (motATrouver == motsChoisit or vie == 0)
		{
			break;
		}
	}

	if (motATrouver == motsChoisit)
	{
		cout << "" << endl;
		cout << "							Bravo vous avez gagner							" << endl;
	}
	else if (motATrouver != motsChoisit and vie == 0)
	{
		cout << "							Vous avez perdu							" << endl;
	}

	return 0;

}
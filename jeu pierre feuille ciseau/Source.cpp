#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int continuer = 1;
	do
	{
		vector <string> choix = { "pierre", "feuille" ,"ciseau" };
		srand(static_cast<unsigned int>(time(0))); // synchronisation avec le temps reel
		int choixOrdinateur = rand() % choix.size(); // choisis un nombre aleatoire de la longueur de la liste

		cout << "! Bienvenue au jeu pierre feuille ciseau !" << endl;
		cout << " 1/ Pierre" << endl;
		cout << " 2/ Feuille" << endl;
		cout << " 3/ Ciseau" << endl;
		cout << " Veuillez faire un choix : ";
		int choixUtilisateur;
		cin >> choixUtilisateur;
		choixUtilisateur -= 1;

		cout << "Vous avez choisi : " << choix[choixUtilisateur] << endl;
		cout << "L'ordinateur a choisit : " << choix[choixOrdinateur] << endl;

		int resultat = (choixUtilisateur - choixOrdinateur + 3) % 3;
		if (resultat == 0)
		{
			cout << "Egaliter" << endl;
		}
		else if (resultat == 1)
		{
			cout << "Vous avez gagner !" << endl;
		}
		else
		{
			cout << "L'ordinateur a gagner ! " << endl;
		}

		cout << "" << endl;
		cout << "Voulez vous refaire une partie" << endl;
		cout << "1/ OUI" << endl;
		cout << "2/ NON" << endl;
		cin >> continuer;
		cout << "" << endl;
		
	} while (continuer == 1);

	return 0;

}
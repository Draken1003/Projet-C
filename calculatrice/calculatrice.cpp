#include <iostream>
#include <math.h>
#include "math.h"

using namespace std;

int main()
{
	char choix;
	do
	{ 
		double a, b;
		char operation;

		cout << "Saisir un chiffre : " << endl;
		cin >> a;

		cout << "Saisir un second chiffre : " << endl;
		cin >> b;

		cout << "Choisir l'operation (+, -, *, /)" << endl;
		cin >> operation;

		double resultat;
		switch (operation)
		{
			case'+':
				resultat = addition(a, b);
				break;
			case'-':
				resultat = soustraction(a, b);
				break;
			case'*':
				resultat = multiplication(a, b);
				break;
			case'/':
				resultat = division(a, b);
				break;
			default:
				cout << "Operation invalide" << endl;
		}

		cout << "Le resultat est " << resultat << endl;

		cout << "Voulez vous effectuer une nouvelle operation (O/N)" << endl;
		cin >> choix;
	} while (choix == 'O' || choix == 'o');

	cout << "Merci d'avoir utiliser la calculatrice! Au revoir !" << endl;
	return 0;
}


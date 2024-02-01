#include <iostream>
#include "Header.h"

using namespace std; 

int main()
{

	cout << "Voulez vous afficher un among us ? " << endl;
	cout << "1/ OUI" << endl;
	cout << "2/ NON" << endl;
	int reponse;
	cin >> reponse;

	if (reponse == 1)
	{
		int ligne = 7;
		int colonne = 10;
		amongUs(ligne, colonne);
	}
	else
	{
		cout << "Dommage" << endl;
	}

	return 0;
}

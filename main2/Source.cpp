#include <iostream>
#include "math.h"

using namespace std;

// Prototype avec les valeurs par défaut
int nombreDeSecondes(int heures, int minutes = 0, int secondes = 0);

int main()
{
	/*
	cout << "Addition" << endl;
	int a = 2, b = 2;
	cout << " a vaut : " << a << endl;
	cout << " b vaut : " << b << endl;

	b = ajouteDeux(a);

	cout << " a vaut : " << a << endl;
	cout << " b vaut : " << b << endl;
	
	cout << "Carre" << endl;
	cout << " a vaut : " << a << endl;
	cout << " b vaut : " << b << endl;

	b = carre(b);

	cout << " a vaut : " << a << endl;
	cout << " b vaut : " << b << endl;
	
	
	cout << "Calulateur d'heure de minute en seconde:" << endl;
	cout << "Nombre d'heure : ";
	int heure;
	cin >> heure;

	cout << "Nombre de minute : ";
	int minute;
	cin >> minute;

	cout << "Nombre de seconde : ";
	int seconde;
	cin >> seconde;

	int res = nombreDeSeconde(heure, minute, seconde);
	cout << "Cela correspond a : " << res << " seconde." << endl;
	*/

	int const nombreNote(6);
	double notes[nombreNote];
	notes[0] = 12;
	notes[1] = 13;
	notes[2] = 14;
	notes[3] = 15;
	notes[4] = 16;
	notes[5] = 17;

	double moyennes = moyenne(notes, nombreNote);
	cout << moyennes << endl;

	return 0;
}



